r"""
separate_runs.py

Splits ONE long CORE2S run - a valve sweep recorded without stopping LabVIEW -
into one folder per valve position.

The split points are found automatically from the step changes in main loop flow.
You say how many valve positions there were; the script finds that many segments,
shows them to you, and writes nothing until you say yes.

Usage (run from the data folder). Give the PATH to the folder holding the four
CSVs, then how many valve positions were tested. Quote it if it has spaces:

    python separate_runs.py inline_0_deg\test_003_1kW\raw --positions 7
    python separate_runs.py inline_0_deg\test_003_1kW\raw --positions 7 --overwrite

If the flow steps are too small to detect, give the times yourself instead
(the times you changed the valve, in minutes, or with h/m/s units):

    python separate_runs.py inline_0_deg\test_003_1kW\raw --at 90 180 270
    python separate_runs.py inline_0_deg\test_003_1kW\raw --at 1.5h 3h 4.5h

The folder must hold flow.csv, power.csv, pressure.csv and temperature.csv.

Output goes next to those CSVs:

    <folder>\split_data\valve_position_1\  flow.csv power.csv pressure.csv temperature.csv
    <folder>\split_data\valve_position_2\  ...

valve_position_1 is the first valve position in the run, valve_position_2 the
second, and so on. The time column restarts near 0 in every folder; all four
files in a folder are shifted by the same amount, so they stay lined up.

The data itself is copied unchanged (Inf values and 0.0000 flow readings are
kept exactly as logged). They are only ignored while looking for the split
points. extract_steady_state.py applies its own rules afterwards.

If ANY check fails (missing CSV, too few positions, steps too small to trust,
a segment shorter than the steady-state window), the reason is printed and
NOTHING is written.
"""

import argparse
import shutil
import sys
from pathlib import Path

import numpy as np
import pandas as pd

# =============================================================================
# SETTINGS - change these, not the code below
# =============================================================================
MIN_SEGMENT_MIN = 10.0        # a valve position must last at least this long
                              # (the steady-state window is 10 min, so anything
                              # shorter is useless to extract_steady_state.py)

SMOOTH_WINDOW_S = 15.0        # noise smoothing before looking for steps
COMPARE_WINDOW_S = 60.0       # how much flow before/after each point is averaged
STEP_MIN_GPM = 1.0            # a real valve step must change main loop flow
                              # by at least this much
STEP_VS_BACKGROUND = 2.0      # ... and be at least this many times bigger than
                              # the biggest wander seen elsewhere in the run

# Flow dropouts (Inf/blank, or a 0.0000 main loop flow) for up to this many
# samples in a row are ignored while looking for steps. Longer runs of zeros are
# treated as real (a stopped pump), so they can mark a split.
MAX_DROPOUT_RUN = 3

MAIN_LOOP_NAME = "main loop"  # text that identifies the main loop flow column
TIME_COL = "Elapsed Time (s)"
CSV_NAMES = ["flow", "power", "pressure", "temperature"]
# =============================================================================

SCRIPT_DIR = Path(__file__).resolve().parent


class CheckFailed(Exception):
    """Raised when a check fails. The message is what gets printed."""


# -----------------------------------------------------------------------------
# Finding and loading the files
# -----------------------------------------------------------------------------
def find_folder(arg):
    """A folder given as a full path, or relative to where you are (the data
    folder), or relative to this script's folder."""
    p = Path(arg)
    if p.is_dir():
        return p.resolve()
    if not p.is_absolute() and (SCRIPT_DIR / p).is_dir():
        return (SCRIPT_DIR / p).resolve()
    raise CheckFailed(
        f"Folder not found: {arg}\n"
        f"  Give the path to the folder holding the four CSVs, starting from the\n"
        f"  data folder, e.g.\n"
        f"    python separate_runs.py inline_0_deg\\test_003_1kW\\raw --positions 7\n"
        f"  (Looked from: {Path.cwd()} and from: {SCRIPT_DIR})"
    )


def load_csvs(folder):
    files = {f.name.lower(): f for f in folder.glob("*.csv")}
    missing = [n for n in CSV_NAMES if f"{n}.csv" not in files]
    if missing:
        hint = ""
        if not files and any(p.is_dir() for p in folder.iterdir()):
            hint = ("\n  This folder holds other folders, not CSVs. Give the path to the "
                    "folder\n  that holds flow.csv, power.csv, pressure.csv and "
                    "temperature.csv.")
        raise CheckFailed(
            f"Missing CSV file(s) in {folder.name}: "
            + ", ".join(f"{m}.csv" for m in missing)
            + f"\n  Files found: {sorted(files) or 'none'}"
            + hint
        )

    data = {}
    for name in CSV_NAMES:
        df = pd.read_csv(files[f"{name}.csv"])
        df.columns = df.columns.str.strip()        # LabVIEW adds leading spaces
        if TIME_COL not in df.columns:
            raise CheckFailed(
                f"{name}.csv has no '{TIME_COL}' column.\n"
                f"  Columns found: {list(df.columns)}"
            )
        if df.empty:
            raise CheckFailed(f"{name}.csv is empty.")
        df = df.sort_values(TIME_COL).reset_index(drop=True)
        data[name] = df
    return data


def main_loop_column(flow):
    cols = [c for c in flow.columns
            if c != TIME_COL and MAIN_LOOP_NAME in c.lower() and "(gpm)" in c.lower()]
    if not cols:
        raise CheckFailed(
            f"No main loop flow column found in flow.csv (looking for a column "
            f"with '{MAIN_LOOP_NAME}' and '(GPM)' in its name).\n"
            f"  Columns found: {list(flow.columns)}\n"
            f"  The split points are found from this column, so it has to be there.\n"
            f"  Change MAIN_LOOP_NAME at the top of the script, or give the split "
            f"times yourself with --at."
        )
    return cols[0]


# -----------------------------------------------------------------------------
# Cleaning the flow signal (for detection only - the output files are untouched)
# -----------------------------------------------------------------------------
def clean_for_detection(values):
    """Blank short, isolated dropouts so they can't look like a valve step.

    A dropout sample is Inf/blank, or exactly 0. Runs of up to MAX_DROPOUT_RUN
    such samples between normal readings are blanked. Longer runs of zeros are
    left alone, because a stopped pump is real.
    """
    x = pd.to_numeric(values, errors="coerce").to_numpy(dtype=float)
    x = np.where(np.isfinite(x), x, np.nan)

    bad = ~np.isfinite(x) | (x == 0.0)
    if not bad.any():
        return x, 0

    idx = np.where(bad)[0]
    runs = [(r[0], r[-1]) for r in np.split(idx, np.where(np.diff(idx) > 1)[0] + 1)]

    x = x.copy()
    ignored = 0
    for a, b in runs:
        if (b - a + 1) <= MAX_DROPOUT_RUN and a > 0 and b < len(x) - 1:
            x[a:b + 1] = np.nan
            ignored += b - a + 1
    return x, ignored


# -----------------------------------------------------------------------------
# Finding the steps
# -----------------------------------------------------------------------------
def step_size_curve(x, samples_per_window):
    """For every sample: (average of the flow just after) - (just before)."""
    s = pd.Series(x)
    w = max(2, samples_per_window)
    before = s.shift(1).rolling(w, min_periods=w // 2).mean()
    after = s[::-1].rolling(w, min_periods=w // 2).mean()[::-1]
    return (after - before).to_numpy(dtype=float)


def refine_split(x, i, reach):
    """Move the split to the sample where the flow actually jumps."""
    lo, hi = max(1, i - reach), min(len(x) - 1, i + reach + 1)
    window = x[lo - 1:hi]
    jumps = np.abs(np.diff(window))
    if not np.isfinite(jumps).any():
        return i
    return lo + int(np.nanargmax(jumps))


def find_splits(t, x_raw, n_positions):
    """Return the indices where the valve was changed (n_positions - 1 of them)."""
    dt = float(np.median(np.diff(t)))
    if not np.isfinite(dt) or dt <= 0:
        raise CheckFailed("Could not work out the sample rate of flow.csv.")

    smooth_n = max(1, int(round(SMOOTH_WINDOW_S / dt)))
    compare_n = max(2, int(round(COMPARE_WINDOW_S / dt)))
    separation = int(round(MIN_SEGMENT_MIN * 60.0 / dt))

    span_min = (t[-1] - t[0]) / 60.0
    if span_min < n_positions * MIN_SEGMENT_MIN:
        raise CheckFailed(
            f"The run is {span_min:.1f} min long, which is not enough for "
            f"{n_positions} valve positions\n"
            f"  of at least {MIN_SEGMENT_MIN:.0f} min each "
            f"({n_positions * MIN_SEGMENT_MIN:.0f} min needed).\n"
            f"  Check the number after --positions."
        )

    smooth = pd.Series(x_raw).rolling(smooth_n, center=True, min_periods=1).median()
    smooth = smooth.to_numpy(dtype=float)

    step = step_size_curve(smooth, compare_n)
    size = np.abs(step)

    # Only consider points that leave a long enough segment on each side.
    allowed = np.zeros(len(t), dtype=bool)
    allowed[separation:len(t) - separation] = True
    allowed &= np.isfinite(size)
    if not allowed.any():
        raise CheckFailed(
            f"The run is too short to split into segments of at least "
            f"{MIN_SEGMENT_MIN:.0f} min."
        )

    # Take the biggest step, block out the area around it, repeat.
    available = allowed.copy()
    chosen = []
    for _ in range(n_positions - 1):
        if not available.any():
            raise CheckFailed(
                f"Could only find {len(chosen)} flow step(s) at least "
                f"{MIN_SEGMENT_MIN:.0f} min apart,\n"
                f"  but {n_positions} valve positions needs {n_positions - 1}.\n"
                f"  Check the number after --positions, or give the times yourself "
                f"with --at."
            )
        i = int(np.nanargmax(np.where(available, size, -np.inf)))
        chosen.append(i)
        available[max(0, i - separation):i + separation + 1] = False

    # How much does the flow wander WITHIN a segment? Measured the same way, at
    # every point that is well clear of a chosen step.
    quiet = allowed.copy()
    margin = 2 * compare_n
    for i in chosen:
        quiet[max(0, i - margin):i + margin + 1] = False
    background = size[quiet]
    background = float(np.nanmax(background)) if np.isfinite(background).any() else 0.0
    smallest = float(np.nanmin(size[chosen]))
    needed = max(STEP_MIN_GPM, STEP_VS_BACKGROUND * background)

    if smallest < needed:
        raise CheckFailed(
            f"The flow steps are too small to split on reliably.\n"
            f"  Smallest step found: {smallest:.2f} GPM\n"
            f"  Needed:              {needed:.2f} GPM "
            f"(at least {STEP_MIN_GPM:.1f} GPM, and at least "
            f"{STEP_VS_BACKGROUND:.0f}x the\n"
            f"                       {background:.2f} GPM wander seen elsewhere "
            f"in the run)\n"
            f"  Either the number after --positions is wrong, or two valve angles "
            f"gave\n"
            f"  nearly the same flow. Give the times yourself instead, e.g.\n"
            f"    python separate_runs.py <folder> --at 90 180 270"
        )

    chosen = [refine_split(smooth, i, smooth_n) for i in sorted(chosen)]
    return sorted(set(chosen)), smallest, background


# -----------------------------------------------------------------------------
# Times typed in by hand (--at)
# -----------------------------------------------------------------------------
def parse_time(text):
    s = str(text).strip().lower()
    try:
        if s.endswith("h"):
            return float(s[:-1]) * 3600.0
        if s.endswith("m") or s.endswith("min"):
            return float(s.rstrip("min")) * 60.0
        if s.endswith("s"):
            return float(s[:-1])
        return float(s) * 60.0                     # a plain number means minutes
    except ValueError:
        raise CheckFailed(
            f"Could not read the time '{text}'.\n"
            f"  Use minutes (90), or add a unit: 1.5h, 90m, 5400s."
        )


# -----------------------------------------------------------------------------
# Building and reporting the segments
# -----------------------------------------------------------------------------
def build_segments(data, split_times):
    """Turn split times into (start, end) boundaries covering the whole run."""
    first = min(float(df[TIME_COL].iloc[0]) for df in data.values())
    last = max(float(df[TIME_COL].iloc[-1]) for df in data.values())

    edges = [first] + list(split_times) + [last + 1e-6]
    for a, b in zip(edges, edges[1:]):
        if b <= a:
            raise CheckFailed(
                "The split times must be inside the run and in increasing order.\n"
                f"  Run covers {first / 60:.1f} to {last / 60:.1f} min."
            )
        if (b - a) / 60.0 < MIN_SEGMENT_MIN:
            raise CheckFailed(
                f"One segment would be only {(b - a) / 60:.1f} min long "
                f"({a / 60:.1f} to {b / 60:.1f} min),\n"
                f"  shorter than the {MIN_SEGMENT_MIN:.0f}-min steady-state window. "
                f"Check the split times."
            )
    return list(zip(edges, edges[1:]))


def slice_segment(df, t_start, t_end, offset):
    t = df[TIME_COL].to_numpy(dtype=float)
    part = df[(t >= t_start) & (t < t_end)].copy()
    part[TIME_COL] = (part[TIME_COL].to_numpy(dtype=float) - offset).round(4)
    return part.reset_index(drop=True)


def average(df, unit, exclude=None):
    cols = [c for c in df.columns
            if c != TIME_COL and unit.lower() in c.lower()
            and (exclude is None or exclude.lower() not in c.lower())]
    if not cols:
        return None
    values = df[cols].to_numpy(dtype=float)
    values = np.where(np.isfinite(values) & (values != 0.0), values, np.nan)
    if not np.isfinite(values).any():
        return None
    return float(np.nanmean(values))


def report(segments, data, main_col):
    print()
    print(f"Found {len(segments)} valve position(s):")
    print()
    print("  folder                start      end     length   main loop    HX    power   rows")
    print("                        (min)     (min)    (min)      (GPM)    (GPM)    (W)")
    print("  " + "-" * 79)

    rows = []
    for k, (a, b) in enumerate(segments, start=1):
        offset = a
        parts = {n: slice_segment(df, a, b, offset) for n, df in data.items()}
        flow = parts["flow"]

        main = average(flow[[TIME_COL, main_col]], "(gpm)")
        hx = average(flow, "(gpm)", exclude=MAIN_LOOP_NAME)
        power = average(parts["power"], "(w)")

        rows.append((k, a, b, parts))
        counts = [len(parts[n]) for n in CSV_NAMES]
        if min(counts) == 0:
            raise CheckFailed(
                f"valve_position_{k} would have no rows in at least one file "
                f"({a / 60:.1f} to {b / 60:.1f} min). Check the split times."
            )
        shown = f"{min(counts)}" if min(counts) == max(counts) else \
                f"{min(counts)}-{max(counts)}"
        print(f"  valve_position_{k:<4}  {a / 60:8.1f} {b / 60:8.1f} {(b - a) / 60:8.1f}"
              f"   {main if main is not None else float('nan'):8.2f}"
              f" {hx if hx is not None else float('nan'):7.2f}"
              f" {power if power is not None else float('nan'):8.0f}"
              f"  {shown:>6}")
    return rows


def write_segments(rows, out_root):
    # Clear out an old split_data first, so folders left over from a run with
    # more valve positions can't sit there looking like real data.
    if out_root.exists():
        shutil.rmtree(out_root)
    out_root.mkdir(parents=True, exist_ok=True)
    written = []
    for k, _, _, parts in rows:
        folder = out_root / f"valve_position_{k}"
        folder.mkdir(parents=True, exist_ok=True)
        for name in CSV_NAMES:
            parts[name].to_csv(folder / f"{name}.csv", index=False)
        written.append(folder)
    return written


# -----------------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser(
        description="Split one long valve-sweep run into one folder per valve position.")
    ap.add_argument("folder", help="path to the folder holding the four CSVs, e.g. "
                                   "inline_0_deg\\test_003_1kW\\raw")
    ap.add_argument("--positions", type=int, default=None,
                    help="how many valve positions were tested in this run")
    ap.add_argument("--at", nargs="+", default=None, metavar="TIME",
                    help="instead of detecting: the times you changed the valve "
                         "(minutes, or 1.5h / 90m / 5400s)")
    ap.add_argument("--overwrite", action="store_true",
                    help="replace an existing split_data folder")
    ap.add_argument("--yes", action="store_true",
                    help="skip the confirmation question and write straight away")
    args = ap.parse_args()

    try:
        if (args.positions is None) == (args.at is None):
            raise CheckFailed(
                "Give either --positions (let the script find the steps) or --at "
                "(type the times).\n"
                "  e.g.  python separate_runs.py <folder> --positions 7\n"
                "        python separate_runs.py <folder> --at 90 180 270"
            )
        if args.positions is not None and args.positions < 2:
            raise CheckFailed(
                f"--positions is {args.positions}. There is nothing to split unless "
                f"there were at least 2 valve positions."
            )

        folder = find_folder(args.folder)
        print(f"Run: {folder}")

        out_root = folder / "split_data"
        if out_root.exists() and not args.overwrite:
            raise CheckFailed(
                f"Output folder already exists: {out_root}\n"
                "  Re-run with --overwrite to replace it."
            )

        data = load_csvs(folder)
        for name in CSV_NAMES:
            print(f"  {name}.csv: {len(data[name])} rows")

        flow = data["flow"]
        main_col = main_loop_column(flow)
        t = flow[TIME_COL].to_numpy(dtype=float)

        if args.at is not None:
            split_times = sorted(parse_time(v) for v in args.at)
            print(f"\nUsing the times you gave: "
                  f"{', '.join(f'{s / 60:.1f} min' for s in split_times)}")
        else:
            x, ignored = clean_for_detection(flow[main_col])
            if ignored:
                print(f"  Note: ignored {ignored} flow dropout sample(s) while looking "
                      f"for the steps.")
            print(f"\nLooking for {args.positions - 1} step(s) in '{main_col}' ...")
            split_idx, smallest, background = find_splits(t, x, args.positions)
            split_times = [float(t[i]) for i in split_idx]
            print(f"  Smallest step found: {smallest:.2f} GPM "
                  f"(background wander elsewhere: {background:.2f} GPM)")
            print(f"  Valve changed at: "
                  f"{', '.join(f'{s / 60:.1f} min' for s in split_times)}")

        segments = build_segments(data, split_times)
        rows = report(segments, data, main_col)

    except CheckFailed as e:
        print("\n*** NOTHING WAS CREATED ***")
        print(str(e))
        sys.exit(1)

    # ---- confirm before writing ---------------------------------------------
    print()
    print("Check the main loop flow column above: each valve position should be")
    print("clearly different from the ones next to it.")
    if not args.yes:
        try:
            answer = input(f"\nWrite these {len(rows)} folder(s) into {out_root}? [y/N] ")
        except EOFError:
            answer = ""
        if answer.strip().lower() not in ("y", "yes"):
            print("\n*** NOTHING WAS CREATED ***")
            print("Nothing written. Re-run with a different --positions, or use --at "
                  "to give the times.")
            sys.exit(1)

    written = write_segments(rows, out_root)
    print(f"\nWrote {len(written)} folder(s) into {out_root}:")
    for folder in written:
        print(f"  {folder.name}\\  (flow.csv, power.csv, pressure.csv, temperature.csv)")
    print("\nRename them to the valve angle and move them where you want, then run "
          "extract_steady_state.py on each one.")


if __name__ == "__main__":
    main()
