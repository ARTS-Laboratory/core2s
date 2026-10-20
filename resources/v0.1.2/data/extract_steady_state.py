r"""
extract_steady_state.py

Finds the LAST 10-minute steady-state window in one CORE2S test run and writes
that window out as trimmed CSVs (flow, power, pressure, temperature) plus one
merged CSV.

Usage (run from the data folder). Give the PATH to ONE test folder, starting
from the data folder (or a full path). Quote it if it has spaces:

    python extract_steady_state.py bypass_valve_position_tests\raw\test_1\0_deg_test_1
    python extract_steady_state.py bypass_valve_position_tests\raw\test_1\0_deg_test_1 bypass_valve_position_tests\processed\test_1
    python extract_steady_state.py bypass_valve_position_tests\raw\test_1\0_deg_test_1 --overwrite

The optional second argument is the folder to put the results in. The results
folder is created inside it, named <test_folder>_processed. It must already exist.

If you leave it out, results go to the matching place under the "processed"
folder that sits next to "raw", mirroring the folders between raw and the test:

    bypass_valve_position_tests\raw\test_1\0_deg_test_1
 -> bypass_valve_position_tests\processed\test_1\0_deg_test_1_processed

(The "processed" folder must exist; folders inside it, like test_1, are created.)
Each test folder holds flow.csv, power.csv, pressure.csv and temperature.csv.

If ANY check fails (missing CSV, timestamp gap, no steady state, window shorter
than 10 min, files not on a shared clock), the reason is printed and NOTHING
is written.
"""

import argparse
import re
import sys
from pathlib import Path

import numpy as np
import pandas as pd

# =============================================================================
# SETTINGS - change these, not the code below
# =============================================================================
WINDOW_MIN = 10.0                 # window length (minutes)
TEMP_SLOPE_MAX = 0.02             # steady-state limit on |dT/dt| (deg C / min)
TEMP_EXCLUDE = ["T8"]             # channels ignored for the steady-state check
                                  # (still saved in the output)

CHECK_POWER = True
POWER_MIN_W = 100.0               # heater counts as ON above this mean power (W)
POWER_MAX_VARIATION = 0.02        # window std / mean must be below this (2%)

CHECK_FLOW = True
FLOW_MIN_GPM = 0.1                # each flow counts as ON above this mean (GPM)
FLOW_MAX_VARIATION = 0.05         # window std / mean must be below this (5%)

STARTUP_SECONDS = 10.0            # NaN/Inf rows in the first N seconds are skipped;
                                  # NaN/Inf anywhere later stops the script
GAP_FACTOR = 3.0                  # a gap = time step > GAP_FACTOR x typical step
CLOCK_TOLERANCE_S = 0.5           # max time offset when merging the four files

TIME_COL = "Elapsed Time (s)"
CSV_NAMES = ["flow", "power", "pressure", "temperature"]
# =============================================================================

SCRIPT_DIR = Path(__file__).resolve().parent


class CheckFailed(Exception):
    """Raised when a check fails. The message is what gets printed."""


# -----------------------------------------------------------------------------
# Loading and basic checks
# -----------------------------------------------------------------------------
def resolve_dir(arg):
    """A folder given as a full path, or relative to where you are (the data
    folder), or relative to this script's folder. Returns None if not found."""
    p = Path(arg)
    if p.is_dir():
        return p.resolve()
    if not p.is_absolute() and (SCRIPT_DIR / p).is_dir():
        return (SCRIPT_DIR / p).resolve()
    return None


def find_test_folder(arg):
    folder = resolve_dir(arg)
    if folder is None:
        raise CheckFailed(
            f"Test folder not found: {arg}\n"
            f"  Give the path to the test folder, starting from the data folder, e.g.\n"
            f"    python extract_steady_state.py bypass_valve_position_tests\\raw\\test_1\\0_deg_test_1\n"
            f"  (Looked from: {Path.cwd()} and from: {SCRIPT_DIR})"
        )
    return folder


def find_destination(test_folder, dest_arg):
    """Return the folder the <test>_processed folder will be created inside."""
    if dest_arg:
        dest = resolve_dir(dest_arg)
        if dest is None:
            raise CheckFailed(
                f"Destination folder not found: {dest_arg}\n"
                f"  It must already exist (the script won't create it, so a typo can't\n"
                f"  make a stray folder). Create it, or leave the destination off to use\n"
                f"  the matching folder under 'processed'."
            )
        return dest

    # No destination given: mirror the path under the 'processed' folder that
    # sits next to the nearest 'raw' folder above the test folder.
    for ancestor in test_folder.parents:
        if ancestor.name.lower() == "raw":
            processed_root = ancestor.parent / "processed"
            if not processed_root.is_dir():
                raise CheckFailed(
                    f"'processed' folder not found next to 'raw': {processed_root}\n"
                    f"  Create it, or give a destination folder as the second argument."
                )
            return processed_root / test_folder.parent.relative_to(ancestor)

    raise CheckFailed(
        f"Can't tell where to put the results: {test_folder} is not inside a folder named 'raw'.\n"
        f"  Give a destination folder as the second argument."
    )


def load_csvs(folder):
    files = {f.name.lower(): f for f in folder.glob("*.csv")}
    missing = [n for n in CSV_NAMES if f"{n}.csv" not in files]
    if missing:
        hint = ""
        if not files and any(p.is_dir() for p in folder.iterdir()):
            hint = ("\n  This folder holds other folders, not CSVs. Give the path to ONE "
                    "test folder (for example ...\\test_1\\0_deg_test_1).")
        raise CheckFailed(
            f"Missing CSV file(s) in {folder.name}: "
            + ", ".join(f"{m}.csv" for m in missing)
            + f"\n  Files found: {sorted(files) or 'none'}"
            + hint
        )

    data = {}
    for name in CSV_NAMES:
        df = pd.read_csv(files[f"{name}.csv"])
        df.columns = df.columns.str.strip()      # LabVIEW adds leading spaces
        if TIME_COL not in df.columns:
            raise CheckFailed(
                f"{name}.csv has no '{TIME_COL}' column.\n"
                f"  Columns found: {list(df.columns)}"
            )
        if df.empty:
            raise CheckFailed(f"{name}.csv is empty.")
        df = df.sort_values(TIME_COL).reset_index(drop=True)

        # Startup rows: LabVIEW often writes NaN (or Inf, e.g. a flow calculation
        # dividing by zero) in the first second(s) before a channel has settled.
        # Inf is treated exactly like a blank value. Bad rows in the first
        # STARTUP_SECONDS are skipped (with a notice).
        value_cols = [c for c in df.columns if c != TIME_COL]
        df[value_cols] = df[value_cols].replace([np.inf, -np.inf], np.nan)
        bad = df[value_cols].isna().any(axis=1).to_numpy()
        if bad.all():
            raise CheckFailed(f"{name}.csv has no rows with complete data (all NaN/Inf/blank).")
        t = df[TIME_COL].to_numpy(float)
        startup = bad & (t <= t[0] + STARTUP_SECONDS)
        if startup.any():
            cut = int(np.where(startup)[0][-1]) + 1
            if cut >= len(df):
                raise CheckFailed(f"{name}.csv has no rows with complete data after startup.")
            print(f"Note: {name}.csv - skipped {cut} startup row(s) with NaN/Inf "
                  f"(up to {t[cut - 1]:.1f} s).")
            df = df.iloc[cut:].reset_index(drop=True)

        # Any NaN/Inf after that is a real dropout -> stop.
        if df.isna().any().any():
            bad_cols = df.columns[df.isna().any()].tolist()
            first_bad = df[TIME_COL][df.isna().any(axis=1)].iloc[0]
            raise CheckFailed(
                f"{name}.csv has blank/NaN/Inf values in: {bad_cols}\n"
                f"  First one at {first_bad:.1f} s (after the startup period)."
            )
        data[name] = df
    return data


def check_gaps(data):
    problems = []
    for name, df in data.items():
        t = df[TIME_COL].to_numpy()
        dt = np.diff(t)
        if len(dt) == 0:
            continue
        typical = np.median(dt)
        if np.any(dt <= 0):
            i = int(np.argmax(dt <= 0))
            problems.append(f"  {name}.csv: time goes backwards/repeats at {t[i]:.1f} s")
        for i in np.where(dt > GAP_FACTOR * typical)[0]:
            problems.append(
                f"  {name}.csv: {dt[i]:.1f} s gap from {t[i]:.1f} s to {t[i+1]:.1f} s "
                f"(typical step {typical:.2f} s)"
            )
    if problems:
        raise CheckFailed("Timestamp gaps/dropouts found:\n" + "\n".join(problems))


# -----------------------------------------------------------------------------
# Rolling statistics over a fixed time window (fast, uses cumulative sums)
# -----------------------------------------------------------------------------
def window_starts(t, win_s):
    """For each end index i, index of first sample with t >= t[i] - win_s."""
    return np.searchsorted(t, t - win_s, side="left")


def rolling_slope(t, x, start):
    """Least-squares slope of x vs t over samples start[i]..i (inclusive)."""
    t = t - t[0]
    c = lambda a: np.concatenate([[0.0], np.cumsum(a)])
    St, Sx, Stt, Stx, S1 = c(t), c(x), c(t * t), c(t * x), c(np.ones_like(t))
    e = np.arange(len(t)) + 1
    n = S1[e] - S1[start]
    st, sx = St[e] - St[start], Sx[e] - Sx[start]
    stt, stx = Stt[e] - Stt[start], Stx[e] - Stx[start]
    den = n * stt - st * st
    with np.errstate(invalid="ignore", divide="ignore"):
        return np.where(den > 0, (n * stx - st * sx) / den, np.nan)


def rolling_mean_std(x, start):
    c = lambda a: np.concatenate([[0.0], np.cumsum(a)])
    S, SS = c(x), c(x * x)
    e = np.arange(len(x)) + 1
    n = e - start
    m = (S[e] - S[start]) / n
    var = np.maximum((SS[e] - SS[start]) / n - m * m, 0.0)
    return m, np.sqrt(var)


def columns_with_unit(df, unit):
    return [c for c in df.columns if c != TIME_COL and unit.lower() in c.lower()]


def is_excluded(col):
    for ch in TEMP_EXCLUDE:
        if re.search(rf"(^|[^A-Za-z0-9]){re.escape(ch)}([^0-9]|$)", col, re.I):
            return True
    return False


# -----------------------------------------------------------------------------
# Window search
# -----------------------------------------------------------------------------
def find_last_window(data):
    win_s = WINDOW_MIN * 60.0
    temp = data["temperature"]
    t = temp[TIME_COL].to_numpy(float)

    span = t[-1] - t[0]
    if span < win_s:
        raise CheckFailed(
            f"Test is only {span/60:.1f} min long - shorter than the "
            f"{WINDOW_MIN:.0f}-min window. No window can be extracted."
        )

    # --- temperature criterion ------------------------------------------------
    all_tc = [c for c in temp.columns if c != TIME_COL]
    tc_cols = [c for c in all_tc if not is_excluded(c)]
    if not tc_cols:
        raise CheckFailed("No temperature channels left after exclusions.")
    excluded = [c for c in all_tc if c not in tc_cols]

    start = window_starts(t, win_s)
    full = (t - win_s) >= t[0]                     # window fully inside the data
    slopes = {c: rolling_slope(t, temp[c].to_numpy(float), start) * 60.0
              for c in tc_cols}                    # deg C / min
    worst = np.max(np.abs(np.vstack(list(slopes.values()))), axis=0)
    temp_ok = full & (worst < TEMP_SLOPE_MAX)

    # --- power / flow criteria (evaluated at each temperature end time) -------
    def onoff_steady(df, cols, on_min, max_var, label):
        tt = df[TIME_COL].to_numpy(float)
        st = window_starts(tt, win_s)
        idx = np.clip(np.searchsorted(tt, t, side="right") - 1, 0, len(tt) - 1)
        ok = np.ones_like(t, dtype=bool)
        reasons = {}
        for c in cols:
            m, s = rolling_mean_std(df[c].to_numpy(float), st)
            m, s = m[idx], s[idx]
            on = m >= on_min
            with np.errstate(invalid="ignore", divide="ignore"):
                steady = np.where(on, s / m, np.inf) < max_var
            reasons[c] = (on, steady)
            ok &= on & steady
        return ok, reasons

    power_ok = np.ones_like(temp_ok)
    flow_ok = np.ones_like(temp_ok)
    power_info, flow_info = {}, {}

    if CHECK_POWER:
        pcols = columns_with_unit(data["power"], "(W)")
        if not pcols:
            raise CheckFailed(
                "Power check is on, but no column with '(W)' was found in power.csv.\n"
                f"  Columns found: {list(data['power'].columns)}\n"
                "  Set CHECK_POWER = False at the top of the script, or rename the column."
            )
        power_ok, power_info = onoff_steady(
            data["power"], pcols, POWER_MIN_W, POWER_MAX_VARIATION, "power")

    if CHECK_FLOW:
        fcols = columns_with_unit(data["flow"], "(GPM)")
        if not fcols:
            raise CheckFailed(
                "Flow check is on, but no column with '(GPM)' was found in flow.csv.\n"
                f"  Columns found: {list(data['flow'].columns)}"
            )
        flow_ok, flow_info = onoff_steady(
            data["flow"], fcols, FLOW_MIN_GPM, FLOW_MAX_VARIATION, "flow")

    good = temp_ok & power_ok & flow_ok

    if not good.any():
        raise CheckFailed(explain_failure(
            t, full, worst, slopes, temp_ok, power_info, flow_info))

    end_i = int(np.where(good)[0][-1])              # LAST qualifying window
    t_end = t[end_i]
    t_start = t_end - win_s
    info = {
        "t_start": t_start,
        "t_end": t_end,
        "slopes": {c: slopes[c][end_i] for c in tc_cols},
        "excluded": excluded,
    }
    return info


def explain_failure(t, full, worst, slopes, temp_ok, power_info, flow_info):
    lines = ["No steady-state window found."]
    valid = full & np.isfinite(worst)
    if not valid.any():
        return lines[0]

    i_best = int(np.where(valid)[0][np.argmin(worst[valid])])
    limiting = max(slopes, key=lambda c: abs(slopes[c][i_best]))
    lines.append(
        f"  Flattest 10-min window ended at {t[i_best]/60:.1f} min: worst channel was "
        f"{limiting} at {abs(slopes[limiting][i_best]):.4f} deg C/min "
        f"(limit {TEMP_SLOPE_MAX})."
    )

    if temp_ok.any():
        last_t = int(np.where(temp_ok)[0][-1])
        lines.append(
            f"  Temperatures DID meet the limit in {temp_ok.sum()} window(s) "
            f"(latest ending at {t[last_t]/60:.1f} min), but power/flow failed there:"
        )
        for label, infos, on_min, var in [
            ("power", power_info, POWER_MIN_W, POWER_MAX_VARIATION),
            ("flow", flow_info, FLOW_MIN_GPM, FLOW_MAX_VARIATION),
        ]:
            for c, (on, steady) in infos.items():
                if not on[last_t]:
                    lines.append(f"    {c}: OFF (mean below {on_min})")
                elif not steady[last_t]:
                    lines.append(f"    {c}: not steady (varies more than {var:.0%})")
    else:
        lines.append("  Temperatures never met the slope limit for a full window.")
    return "\n".join(lines)


# -----------------------------------------------------------------------------
# Trimming, merging, writing
# -----------------------------------------------------------------------------
def trim(df, t0, t1):
    return df[(df[TIME_COL] >= t0) & (df[TIME_COL] <= t1)].reset_index(drop=True)


def merge_window(trimmed):
    """Merge on the temperature time base, matching nearest sample in time."""
    merged = trimmed["temperature"].copy()
    used = set(merged.columns)
    for name in ["pressure", "flow", "power"]:
        df = trimmed[name].copy()
        rename = {}
        for c in df.columns:
            if c != TIME_COL and c in used:
                rename[c] = f"{c} [{name}]"
        df = df.rename(columns=rename)
        used |= set(df.columns)
        merged = pd.merge_asof(
            merged, df, on=TIME_COL, direction="nearest",
            tolerance=CLOCK_TOLERANCE_S)
        if merged.isna().any().any():
            raise CheckFailed(
                f"{name}.csv timestamps don't line up with temperature.csv "
                f"(no {name} sample within {CLOCK_TOLERANCE_S} s of some temperature "
                f"samples in the window). Check that the files share one clock."
            )
    return merged


def main():
    ap = argparse.ArgumentParser(description="Extract the last steady-state window.")
    ap.add_argument("test", help="path to ONE test folder, e.g. "
                    "bypass_valve_position_tests\\raw\\test_1\\0_deg_test_1")
    ap.add_argument("destination", nargs="?", default=None,
                    help="optional folder to put the results in (must exist). "
                         "Default: the matching folder under 'processed' next to 'raw'.")
    ap.add_argument("--overwrite", action="store_true",
                    help="replace an existing processed folder for this test")
    args = ap.parse_args()

    try:
        folder = find_test_folder(args.test)
        print(f"Test: {folder.name}")

        dest = find_destination(folder, args.destination)
        out_dir = dest / f"{folder.name}_processed"
        if out_dir.exists() and not args.overwrite:
            raise CheckFailed(
                f"Output folder already exists: {out_dir}\n"
                "  Re-run with --overwrite to replace it."
            )

        data = load_csvs(folder)
        check_gaps(data)
        win = find_last_window(data)

        trimmed = {n: trim(df, win["t_start"], win["t_end"]) for n, df in data.items()}
        for n, df in trimmed.items():
            dur = (df[TIME_COL].iloc[-1] - df[TIME_COL].iloc[0]) / 60 if len(df) > 1 else 0
            if dur < WINDOW_MIN - 0.1:        # allow ~one sample of slack
                raise CheckFailed(
                    f"{n}.csv only covers {dur:.2f} min of the selected window "
                    f"(needs {WINDOW_MIN:.0f} min)."
                )
        merged = merge_window(trimmed)

        # ---- everything passed: write outputs --------------------------------
        out_dir.mkdir(parents=True, exist_ok=True)
        for n, df in trimmed.items():
            df.to_csv(out_dir / f"{n}_steady_state.csv", index=False)
        merged.to_csv(out_dir / "merged_steady_state.csv", index=False)

    except CheckFailed as e:
        print("\n*** NOTHING WAS CREATED ***")
        print(str(e))
        sys.exit(1)

    # ---- success report ------------------------------------------------------
    print(f"\nSteady-state window: {win['t_start']/60:.2f} -> {win['t_end']/60:.2f} min "
          f"(elapsed time {win['t_start']:.1f} - {win['t_end']:.1f} s)")
    print(f"Slopes in window (deg C/min, limit {TEMP_SLOPE_MAX}):")
    for c, s in win["slopes"].items():
        print(f"  {c}: {s:+.4f}")
    if win["excluded"]:
        print(f"Not used for steady-state check: {', '.join(win['excluded'])}")
    print(f"\nWrote to {out_dir}:")
    for f in sorted(out_dir.glob("*.csv")):
        print(f"  {f.name}")


if __name__ == "__main__":
    main()
