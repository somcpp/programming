import numpy as np
import matplotlib.pyplot as plt

# write the code..
x = np.arange(-3,3,0.1)
y = np.arange(-3,3,0.1)
x,y = np.meshgrid(x,y)
z = (1-x)**2 + 100*(y-x**2)**2

plt.contourf(x,y,z)
plt.xlabel("y")
plt.xlabel("x")
plt.title("Contour Plot")
plt.colorbar()
plt.show()