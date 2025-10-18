import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# Sample dataset
data = {
    "Category": ["A", "A", "A", "A", "B", "B", "B", "B", "C", "C", "C", "C", "D", "D", "D"],
    "Value": [45, 50, 47, 54, 72, 65, 67, 70, 36, 38, 39, 34, 84, 80, 82]
}

df = pd.DataFrame(data)
plt.figure(figsize=(10, 6))
sns.boxplot(x="Category", y="Value", data=df)
plt.title("Box Plot of Value Across Different Categories")
plt.xlabel("Category")
plt.ylabel("Value")
plt.grid(True)
plt.show()