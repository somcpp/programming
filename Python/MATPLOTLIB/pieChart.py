import matplotlib.pyplot as plt
cars = ['AUDI', 'BMW', 'FORD', 'TESLA', 'JAGUAR', 'MERCEDES']
sales = [23, 17, 35, 29, 12, 41]

plt.pie(sales,autopct='%1.1f%%',labels = cars)
plt.show()