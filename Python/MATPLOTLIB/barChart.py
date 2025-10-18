# import matplotlib.pyplot as plt 

# categories = ['A', 'B' , 'C' , 'D']
# values = [4,3,2,5]

# plt.bar(categories,values,color='orange',label='categories')

# # Add title and labels
# plt.title("Simple Bar Chart")
# plt.xlabel("Categories")
# plt.ylabel("Values")

# # Add a legend
# plt.legend()

# # Display the plot
# plt.show()

import matplotlib.pyplot as plt
course = ["C", "C++", "Java", "Python"]
students = [20, 15, 30, 35]

#Type your content here
plt.title("Economy")
plt.ylabel("Students Enrolled")
plt.xlabel("Courses")
plt.bar(course,students)
plt.show()