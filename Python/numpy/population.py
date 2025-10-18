import numpy as np

census = np.array([
    [100000, 50000, 12],  # City 1
    [150000, 75000, 14],  # City 2
    [120000, 60000, 11],  # City 3
    [180000, 90000, 15],    
])

income = census[:,1]

print(f"City with the highest income is City {income + 1}")