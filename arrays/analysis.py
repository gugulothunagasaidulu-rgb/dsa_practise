import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, classification_report

# Load data
df = pd.read_csv("Task 3 and 4_Loan_Data.csv")

# Features
X = df[
    [
        "credit_lines_outstanding",
        "loan_amt_outstanding",
        "total_debt_outstanding",
        "income",
        "years_employed",
        "fico_score",
    ]
]

# Target
y = df["default"]

# Train/Test Split
X_train, X_test, y_train, y_test = train_test_split(
    X,
    y,
    test_size=0.2,
    random_state=42,
)

# Train Logistic Regression
model = LogisticRegression(max_iter=1000)

model.fit(X_train, y_train)

# Predictions
pred = model.predict(X_test)

print("Accuracy:", accuracy_score(y_test, pred))
print(classification_report(y_test, pred))

# Probability of Default
df["PD"] = model.predict_proba(X)[:, 1]

# Recovery Rate
recovery_rate = 0.10

# Expected Loss
df["Expected_Loss"] = (
    df["PD"]
    * df["loan_amt_outstanding"]
    * (1 - recovery_rate)
)

print(df[["customer_id", "PD", "Expected_Loss"]].head())

# Save results
df.to_csv("Credit_Risk_Output.csv", index=False)

print("Output saved as Credit_Risk_Output.csv")