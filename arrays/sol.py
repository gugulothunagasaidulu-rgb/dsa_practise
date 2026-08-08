import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from scipy.interpolate import interp1d

# Load the natural gas price data
df = pd.read_csv("Nat_Gas.csv")

# Convert the Dates column to datetime format
df["Dates"] = pd.to_datetime(df["Dates"])

# Visualize the historical prices
plt.figure(figsize=(10, 5))
plt.plot(df["Dates"], df["Prices"], marker="o")
plt.title("Historical Natural Gas Prices")
plt.xlabel("Date")
plt.ylabel("Price")
plt.grid(True)
plt.show()

# Convert dates to ordinal values for interpolation
x = df["Dates"].map(pd.Timestamp.toordinal)
y = df["Prices"]

# Create interpolation model
price_model = interp1d(
    x,
    y,
    kind="linear",
    fill_value="extrapolate"
)

def estimate_price(date):
    """
    Estimate the natural gas price for any date.

    Parameters:
        date (str): Date in 'YYYY-MM-DD' format

    Returns:
        float: Estimated natural gas price
    """
    date = pd.to_datetime(date)
    return float(price_model(date.toordinal()))

# Example predictions
print("Estimated price on 2024-12-31:", estimate_price("2024-12-31"))
print("Estimated price on 2025-03-31:", estimate_price("2025-03-31"))
print("Estimated price on 2025-09-30:", estimate_price("2025-09-30"))