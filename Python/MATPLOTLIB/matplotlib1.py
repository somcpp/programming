import matplotlib.pyplot as plt
x = [1, 2, 3, 4, 5]
y1 = [2, 4, 6, 8, 10]
y2 = [1, 4, 9, 16, 25]
plt.plot(x,y1, color = 'red',linestyle='-',marker='o',linewidth=2,markersize=8)
plt.plot(x,y2, color = '',linestyle='-',marker='o',linewidth=2,markersize=8)

plt.title("Multiple Lines with Legend")
plt.xlabel("x axis")
plt.ylabel("y axis")

plt.legend()

plt.show()