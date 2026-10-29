import os
import pandas as pd
from scipy.io import savemat

SOURCE_CSV_DIR = r"C:\Users\cheap\OneDrive\Documents\GitHub\core2s\resources\v0.1.2\data\bypass_valve_position_tests\processed\test_1_0_deg_inline\15_deg_test_1_processed"
TARGET_MAT_DIR = r"C:\Users\cheap\OneDrive\Documents\GitHub\core2s\resources\v0.1.1\simulations\Chris_Work\Real_Time"

# Convert raw CSV headers into MATLAB-safe variable names.
COLUMN_NAME_MAP = {
    "Elapsed Time (s)": "time",
}


def convert_csv_to_mat():
    if not os.path.exists(SOURCE_CSV_DIR):
        print(f"Source directory does not exist: {SOURCE_CSV_DIR}")
        return

    os.makedirs(TARGET_MAT_DIR, exist_ok=True)

    print("=========================")
    print(f"Scanning for updates in: {SOURCE_CSV_DIR}")
    print(f"Target destination: {TARGET_MAT_DIR}")
    print("=========================")


    converted_count = 0
    for filename in os.listdir(SOURCE_CSV_DIR):
        if filename.lower().endswith(".csv"):
            csv_path = os.path.join(SOURCE_CSV_DIR, filename)
            mat_filename = os.path.splitext(filename)[0] + ".mat"
            mat_path = os.path.join(TARGET_MAT_DIR, mat_filename)

            try:
                df = pd.read_csv(csv_path)
                mat_data = {
                    COLUMN_NAME_MAP.get(col, col): df[col].values for col in df.columns
                }
                savemat(mat_path, mat_data)
                print(f"Converted: {filename} -> {mat_filename}")
                converted_count += 1
            except Exception as e:
                print(f"Failed to convert {filename}: {e}")

if __name__ == "__main__":
    convert_csv_to_mat()