# -*- coding: utf-8 -*-
"""
SMR thermal loop run analyzer.

Makes four PDF plots (temperature, pressure, flow, power) for ONE test folder.
Run it from Anaconda Prompt, in the "data" folder, like extract_steady_state.py:

    python analyze_run.py 0_deg_test_1               a raw run in raw/
    python analyze_run.py 0_deg_test_1_processed     a 10-minute window in processed/

You can also give a nested name ("test_1\\0_deg_test_1") or a full path.

Expected structure:

    .../resources/v0.1.2/data/
        analyze_run.py
        extract_steady_state.py
        valve_position_testing/
            raw/<test_folder>/          flow.csv power.csv pressure.csv temperature.csv
            processed/<test>_processed/ flow_steady_state.csv ... (from extract_steady_state.py)

Output: a "plots" folder INSIDE the folder you analyzed, holding
    <folder>_temperature_over_time.pdf
    <folder>_pressure_over_time.pdf
    <folder>_flow_over_time.pdf          (main loop flow on the left axis,
                                          heat exchanger flow on the right axis)
    <folder>_power_over_time.pdf

Every graph is titled with the test, e.g. "0° test 1" or "0° test 1 processed".

Time axis:
    - Time always restarts at 0 at the first sample of the file being plotted.
    - For processed windows, a second axis under the plot shows the time in the
      ORIGINAL raw test, so you can see exactly where the window came from.

Inf values (and blank values) are ignored: they are left out of the plot as gaps.
If anything is wrong (folder not found, missing CSV, no usable columns) the reason
is printed and no plots are created.
"""

from __future__ import annotations

import argparse
import re
import sys
import time
from pathlib import Path

import numpy as np
import pandas as pd

import matplotlib


# -------------------------------------------------------------------------
# User-adjustable settings
# -------------------------------------------------------------------------

# Maximum number of points plotted per line (keeps PDFs small and fast).
MAX_PLOT_POINTS = 3000

# Output formats.
SAVE_PDF = True
SAVE_PNG = False
PNG_DPI = 150

# Non-interactive backend: no figure windows, faster, no Spyder/Qt stalls.
USE_NON_INTERACTIVE_BACKEND = True


if USE_NON_INTERACTIVE_BACKEND:
    matplotlib.use("Agg")

import matplotlib.pyplot as plt  # noqa: E402  (must come after matplotlib.use)


matplotlib.rcParams["path.simplify"] = True
matplotlib.rcParams["path.simplify_threshold"] = 1.0
matplotlib.rcParams["agg.path.chunksize"] = 10000
matplotlib.rcParams["pdf.fonttype"] = 42      # keep text editable in the PDFs


# -------------------------------------------------------------------------
# Folders
# -------------------------------------------------------------------------

try:
    DATA_DIR = Path(__file__).resolve().parent
except NameError:                              # code pasted into a console
    DATA_DIR = Path.cwd().resolve()

TEST_ROOT = DATA_DIR / "valve_position_testing"
RAW_DIR = TEST_ROOT / "raw"
PROCESSED_DIR = TEST_ROOT / "processed"


class AnalysisError(Exception):
    """Raised when something is wrong. The message is what gets printed."""


def resolve_folder(argument: str) -> Path:
    """
    Find the folder to analyze.

    Looks in raw/ and processed/ (processed first when the name ends in
    _processed), then treats the argument as a path.
    """
    given = Path(argument)

    if given.is_absolute() and given.is_dir():
        return given.resolve()

    if given.name.endswith("_processed"):
        bases = [PROCESSED_DIR, RAW_DIR]
    else:
        bases = [RAW_DIR, PROCESSED_DIR]

    for base in bases:
        candidate = base / argument
        if candidate.is_dir():
            return candidate.resolve()

    if given.is_dir():
        return given.resolve()

    raise AnalysisError(
        f"Test folder not found: {argument}\n"
        f"  Looked in: {RAW_DIR}\n"
        f"             {PROCESSED_DIR}\n"
        f"  and for it as a path from: {Path.cwd()}"
    )


def is_processed_folder(folder: Path) -> bool:
    """True for a 10-minute-window folder made by extract_steady_state.py."""
    return (
        folder.name.endswith("_processed")
        or folder.parent.name.lower() == "processed"
    )


def make_title(folder: Path) -> str:
    """'0_deg_test_1' -> '0° test 1'; '0_deg_test_1_processed' -> '0° test 1 processed'."""
    name = folder.name
    base = name[: -len("_processed")] if name.endswith("_processed") else name

    match = re.fullmatch(r"(\d+(?:\.\d+)?)_deg_test_(\d+)", base, flags=re.IGNORECASE)
    if match:
        title = f"{match.group(1)}° test {match.group(2)}"
    else:
        title = base.replace("_", " ")

    if is_processed_folder(folder):
        title += " processed"

    return title


# -------------------------------------------------------------------------
# Finding and reading the CSVs
# -------------------------------------------------------------------------

KINDS = ["temperature", "pressure", "flow", "power"]


def find_csv_files(folder: Path) -> dict[str, Path]:
    """Find the four CSVs (raw names, or the *_steady_state names)."""
    available = {p.name.lower(): p for p in folder.glob("*.csv")}

    found: dict[str, Path] = {}
    missing: list[str] = []

    for kind in KINDS:
        for filename in (f"{kind}.csv", f"{kind}_steady_state.csv"):
            if filename in available:
                found[kind] = available[filename]
                break
        else:
            missing.append(f"{kind}.csv")

    if missing:
        raise AnalysisError(
            f"Missing CSV file(s) in {folder.name}: {', '.join(missing)}\n"
            f"  Files found: {sorted(available) or 'none'}\n"
            f"  (Is this a test folder? Give the name of a folder that holds the CSVs.)"
        )

    return found


def get_time_column(df: pd.DataFrame) -> str:
    """Find the time column. Defaults to the first column."""
    for col in df.columns:
        if "time" in col.lower():
            return col

    return df.columns[0]


def read_clean_csv(path: Path) -> tuple[pd.DataFrame, int]:
    """
    Read a CSV, make everything numeric, and turn Inf into blank (NaN).

    Returns the dataframe and how many Inf values were ignored.
    """
    df = pd.read_csv(path)
    df.columns = [str(col).strip() for col in df.columns]

    df = df.dropna(how="all")
    df = df.apply(pd.to_numeric, errors="coerce")

    n_inf = int(np.isinf(df.to_numpy(dtype=float)).sum())
    df = df.replace([np.inf, -np.inf], np.nan)

    time_col = get_time_column(df)
    df = df.dropna(subset=[time_col])
    df = df.sort_values(time_col).reset_index(drop=True)

    if df.empty:
        raise AnalysisError(f"{path.name} has no usable rows.")

    return df, n_inf


# -------------------------------------------------------------------------
# Choosing columns
# -------------------------------------------------------------------------

def is_average_or_summary_column(column_name: str) -> bool:
    """Return True if the column is an average/summary column."""
    lower = column_name.lower()

    keywords = [
        "avg",
        "average",
        "overall",
        "hxpressure",
        "hx pressure",
    ]

    return any(keyword in lower for keyword in keywords)


def is_main_loop_column(column_name: str) -> bool:
    return "main loop" in column_name.lower()


def is_raw_voltage_column(column_name: str) -> bool:
    """Raw voltage / signal-amplitude columns (not wanted in the flow plot)."""
    lower = column_name.lower()
    return any(k in lower for k in ["raw", "voltage", "(v)", " volts"])


def is_power_column(column_name: str) -> bool:
    lower = column_name.lower()
    return any(k in lower for k in ["(w)", "(kw)", "power", "watt"])


def value_columns(df: pd.DataFrame) -> list[str]:
    time_col = get_time_column(df)
    return [c for c in df.columns if c != time_col]


def get_temperature_columns(df: pd.DataFrame) -> list[str]:
    return [c for c in value_columns(df) if not is_average_or_summary_column(c)]


def get_pressure_columns(df: pd.DataFrame) -> list[str]:
    return [c for c in value_columns(df) if not is_average_or_summary_column(c)]


def _is_flow_name(column_name: str) -> bool:
    lower = column_name.lower()
    return "gpm" in lower or "flow" in lower


def get_hx_flow_columns(df: pd.DataFrame) -> list[str]:
    return [
        c for c in value_columns(df)
        if _is_flow_name(c)
        and not is_raw_voltage_column(c)
        and not is_average_or_summary_column(c)
        and not is_main_loop_column(c)
    ]


def get_main_loop_flow_columns(df: pd.DataFrame) -> list[str]:
    return [
        c for c in value_columns(df)
        if _is_flow_name(c)
        and not is_raw_voltage_column(c)
        and not is_average_or_summary_column(c)
        and is_main_loop_column(c)
    ]


def get_power_columns(df: pd.DataFrame) -> list[str]:
    return [
        c for c in value_columns(df)
        if is_power_column(c) and not is_average_or_summary_column(c)
    ]


# -------------------------------------------------------------------------
# Plotting
# -------------------------------------------------------------------------

def downsample_dataframe(df: pd.DataFrame, max_points: int) -> pd.DataFrame:
    """Reduce how many points are drawn (the CSV is not changed)."""
    if len(df) <= max_points:
        return df

    step = max(1, len(df) // max_points)
    return df.iloc[::step, :].copy()


def plot_groups(
    df: pd.DataFrame,
    title: str,
    groups: list[tuple[list[str], str]],
    output_stem: Path,
    processed: bool,
    time_units: str,
    max_points: int,
) -> None:
    """
    Plot one figure.

    groups = [(columns, y_label), ...]. One group = one y axis. Two groups =
    the first on the left axis and the second on the right axis.
    """
    start = time.time()

    time_col = get_time_column(df)
    first_time = float(df[time_col].iloc[0])           # original timestamp of sample 1
    df_plot = downsample_dataframe(df, max_points)

    divisor = 60.0 if time_units == "minutes" else 1.0
    x = (df_plot[time_col].to_numpy(dtype=float) - first_time) / divisor

    n_lines = sum(len(cols) for cols, _ in groups)
    print(f"  Rendering '{output_stem.name}': {n_lines} lines x {len(df_plot)} points", flush=True)

    fig, ax = plt.subplots(figsize=(12, 7))
    two_axes = len(groups) == 2
    axes = [ax, ax.twinx()] if two_axes else [ax]

    handles = []
    color_index = 0

    for axis, (columns, y_label) in zip(axes, groups):
        group_color = None

        for col in columns:
            color = f"C{color_index % 10}"
            color_index += 1
            group_color = group_color or color

            (line,) = axis.plot(
                x,
                df_plot[col].to_numpy(dtype=float),
                label=col,
                linewidth=1.0,
                color=color,
            )
            handles.append(line)

        if two_axes:
            axis.set_ylabel(y_label, color=group_color)
            axis.tick_params(axis="y", colors=group_color)
        else:
            axis.set_ylabel(y_label)

    ax.set_title(title, fontsize=16)
    ax.grid(True, alpha=0.35)

    ax.legend(
        handles=handles,
        labels=[h.get_label() for h in handles],
        fontsize=8,
        loc="center left",
        bbox_to_anchor=(1.13 if two_axes else 1.02, 0.5),
        borderaxespad=0.0,
    )

    unit = time_units
    if processed:
        ax.set_xlabel(f"Time since start of window ({unit})")

        # Second axis under the first: the same moments, labelled with their
        # time in the ORIGINAL raw test.
        offset = first_time / divisor
        original = ax.secondary_xaxis(
            -0.17,
            functions=(lambda v: v + offset, lambda v: v - offset),
        )
        original.set_xlabel(f"Time in original test ({unit})")
        bottom = 0.25
    else:
        ax.set_xlabel(f"Time ({unit})")
        bottom = 0.09

    fig.subplots_adjust(
        left=0.08,
        right=0.70 if two_axes else 0.78,
        top=0.93,
        bottom=bottom,
    )

    if SAVE_PDF:
        pdf_path = output_stem.with_suffix(".pdf")
        fig.savefig(pdf_path, facecolor="white")
        print(f"  Saved: {pdf_path}", flush=True)

    if SAVE_PNG:
        png_path = output_stem.with_suffix(".png")
        fig.savefig(png_path, dpi=PNG_DPI, facecolor="white")
        print(f"  Saved: {png_path}", flush=True)

    plt.close(fig)
    print(f"  Done in {time.time() - start:.1f} s", flush=True)
    print(flush=True)


# -------------------------------------------------------------------------
# Main analysis
# -------------------------------------------------------------------------

def analyze_folder(folder: Path, time_units: str, max_points: int) -> None:
    processed = is_processed_folder(folder)
    title = make_title(folder)

    print(flush=True)
    print(f"Test: {folder.name}", flush=True)
    print(f"Type: {'processed 10-minute window' if processed else 'raw run'}", flush=True)
    print(f"Folder: {folder}", flush=True)
    print(f"Plot title: {title}", flush=True)
    print(flush=True)

    # ---- load everything and check it BEFORE drawing anything ---------------
    csv_files = find_csv_files(folder)

    data: dict[str, pd.DataFrame] = {}
    for kind in KINDS:
        df, n_inf = read_clean_csv(csv_files[kind])
        data[kind] = df
        print(f"{csv_files[kind].name}: {len(df)} rows", flush=True)
        if n_inf:
            print(f"  Note: ignored {n_inf} Inf value(s) in {csv_files[kind].name}.", flush=True)

    temperature_columns = get_temperature_columns(data["temperature"])
    pressure_columns = get_pressure_columns(data["pressure"])
    hx_flow_columns = get_hx_flow_columns(data["flow"])
    main_loop_columns = get_main_loop_flow_columns(data["flow"])
    power_columns = get_power_columns(data["power"])

    problems = []
    if not temperature_columns:
        problems.append(f"  temperature: no temperature columns found. Columns: {list(data['temperature'].columns)}")
    if not pressure_columns:
        problems.append(f"  pressure: no pressure columns found. Columns: {list(data['pressure'].columns)}")
    if not hx_flow_columns and not main_loop_columns:
        problems.append(f"  flow: no GPM flow columns found. Columns: {list(data['flow'].columns)}")
    if not power_columns:
        problems.append(f"  power: no power column ('(W)' or 'power') found. Columns: {list(data['power'].columns)}")
    if problems:
        raise AnalysisError("Could not pick columns to plot:\n" + "\n".join(problems))

    print(flush=True)
    print(f"Temperature columns: {temperature_columns}", flush=True)
    print(f"Pressure columns:    {pressure_columns}", flush=True)
    print(f"Main loop flow:      {main_loop_columns or '(none)'}  -> left axis", flush=True)
    print(f"Heat exchanger flow: {hx_flow_columns or '(none)'}  -> right axis", flush=True)
    print(f"Power columns:       {power_columns}", flush=True)

    if processed:
        time_col = get_time_column(data["temperature"])
        t_first = float(data["temperature"][time_col].iloc[0])
        t_last = float(data["temperature"][time_col].iloc[-1])
        print(
            f"Window covers original test time {t_first / 60:.2f} to {t_last / 60:.2f} min "
            f"({t_first:.1f} to {t_last:.1f} s)",
            flush=True,
        )
    print(flush=True)

    # ---- plots ---------------------------------------------------------------
    plots_dir = folder / "plots"
    plots_dir.mkdir(exist_ok=True)
    stem = folder.name

    common = dict(processed=processed, time_units=time_units, max_points=max_points)

    plot_groups(
        data["temperature"], title,
        [(temperature_columns, "Temperature (°C)")],
        plots_dir / f"{stem}_temperature_over_time", **common,
    )

    plot_groups(
        data["pressure"], title,
        [(pressure_columns, "Pressure (psi)")],
        plots_dir / f"{stem}_pressure_over_time", **common,
    )

    flow_groups = []
    if main_loop_columns:
        flow_groups.append((main_loop_columns, "Main loop flow (GPM)"))
    if hx_flow_columns:
        flow_groups.append((hx_flow_columns, "Heat exchanger flow (GPM)"))

    plot_groups(
        data["flow"], title, flow_groups,
        plots_dir / f"{stem}_flow_over_time", **common,
    )

    power_unit = "kW" if all("(kw)" in c.lower() for c in power_columns) else "W"
    plot_groups(
        data["power"], title,
        [(power_columns, f"Power ({power_unit})")],
        plots_dir / f"{stem}_power_over_time", **common,
    )

    print("Finished.", flush=True)
    print("Plots saved in:", flush=True)
    print(plots_dir, flush=True)


def get_script_arguments() -> list[str]:
    """Command-line arguments, ignoring the ones Spyder/Jupyter inject."""
    argv = sys.argv[1:]

    if any(arg == "-f" or arg.endswith(".json") for arg in argv):
        return []

    return argv


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Plot temperature, pressure, flow and power for one test folder."
    )

    parser.add_argument(
        "folder",
        nargs="?",
        help=(
            "Test folder name (looked up in raw/ then processed/), "
            "e.g. 0_deg_test_1 or 0_deg_test_1_processed. A full path also works."
        ),
    )

    parser.add_argument(
        "--time-units",
        choices=["minutes", "seconds"],
        default="minutes",
        help="Time axis units. Default: minutes.",
    )

    parser.add_argument(
        "--max-points",
        type=int,
        default=MAX_PLOT_POINTS,
        help=f"Max points drawn per line. Default: {MAX_PLOT_POINTS}.",
    )

    args, unknown = parser.parse_known_args(get_script_arguments())

    if unknown:
        print(f"Ignoring unrecognized arguments: {unknown}", flush=True)

    try:
        if not args.folder:
            raise AnalysisError(
                "No test folder given. Tell it which folder to plot, for example:\n"
                "  python analyze_run.py 0_deg_test_1\n"
                "  python analyze_run.py 0_deg_test_1_processed"
            )

        folder = resolve_folder(args.folder)
        analyze_folder(folder, time_units=args.time_units, max_points=args.max_points)

    except AnalysisError as error:
        print("\n*** NO PLOTS WERE CREATED ***")
        print(str(error))
        sys.exit(1)


if __name__ == "__main__":
    main()
