n = int(input())
student_data = []

for _ in range(n):
    name, mark = input().split()
    student_data.append((name, int(mark)))

    
def highest_mark(student_data):
    # Step 1: Find the highest mark
    max_mark = max(mark for name, mark in student_data)
    
    # Step 2: Get all names with that highest mark
    top_scorers = [name for name, mark in student_data if mark == max_mark]
    
    return top_scorers

print(highest_mark(student_data))
