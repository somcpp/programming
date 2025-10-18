import numpy as np

N = int(input("Enter the value of n: "))
rows= int(input("Enter the number of rows: "))

even = [i for i in range(1,N + 1) if i%2 == 0]
print("even_numbers")

totalEvens = len(even)
cols = int(np.ceil(totalEvens/rows))

required = rows*cols
while len(even)<required:
    even.append(0)

even = np.array(even).reshape(rows,cols)

print(even)