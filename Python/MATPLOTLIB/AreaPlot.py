import matplotlib.pyplot as plt
import pandas as pd

# Sample Data for Months and Temperature
data = {
    'Month': ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'],
    'Temperature': [5, 7, 10, 13, 17, 20, 22, 21, 18, 12, 8, 6]
}

plt.fill_between(data['Month'],data['Temperature'])
plt.title('Temperature Variation')
plt.ylabel('Temperature')

plt.legend(['Temperature'], loc='upper left')

plt.xticks(rotation=45)
plt.show()