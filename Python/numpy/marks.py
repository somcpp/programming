import numpy as np

# Provided data
student_data = np.array([
    [85, 90, 88],
    [78, 92, 95],
    [90, 85, 82],
])
subject_names = ["Math", "Science", "English"]

average_scores = np.mean(student_data)
highest_avg_index = np.argmax(average_scores)

highest_subject = subject_names[highest_avg_index]
highest_score = average_scores = [highest_avg_index]

print(f"subject: {highest_subject}")

