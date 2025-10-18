import matplotlib.pyplot as plt

x = [1,2,3,4,5]
y = [2,4,1,8,5]

plt.scatter(x,y,color="purple",marker='o',s=100,label = 'Data points')
plt.title("Simple scatter plot")
plt.xlabel("X axis")
plt.ylabel("Y axis")

plt.legend()
plt.show()