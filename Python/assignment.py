import os

FILE_NAME = "tasks.txt"

def load_tasks():
    """Load tasks from a file."""
    if os.path.exists(FILE_NAME):
        with open(FILE_NAME, "r") as file:
            return [line.strip() for line in file.readlines()]
    return []

def save_tasks(tasks):
    """Save tasks to a file."""
    with open(FILE_NAME, "w") as file:
        for task in tasks:
            file.write(task + "\n")

def add_task(tasks):
    """Add a new task to the list."""
    task = input("Enter a new task: ").strip()
    if task:
        tasks.append(task)
        save_tasks(tasks)
        print("✅ Task added successfully!")
    else:
        print("⚠️ Task cannot be empty.")

def view_tasks(tasks):
    """View all tasks."""
    if not tasks:
        print("📋 No tasks available.")
    else:
        print("\n📌 Your To-Do List:")
        for index, task in enumerate(tasks, start=1):
            print(f"{index}. {task}")

def remove_task(tasks):
    """Remove a completed task."""
    view_tasks(tasks)
    if tasks:
        try:
            task_num = int(input("\nEnter the task number to remove: "))
            if 1 <= task_num <= len(tasks):
                removed_task = tasks.pop(task_num - 1)
                save_tasks(tasks)
                print(f"✅ Task '{removed_task}' removed successfully!")
            else:
                print("⚠️ Invalid task number.")
        except ValueError:
            print("⚠️ Please enter a valid number.")

def main():
    """Main function to run the to-do list program."""
    tasks = load_tasks()

    while True:
        print("\n📝 To-Do List Menu:")
        print("1. Add Task")
        print("2. View Tasks")
        print("3. Remove Task")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ").strip()

        if choice == "1":
            add_task(tasks)
        elif choice == "2":
            view_tasks(tasks)
        elif choice == "3":
            remove_task(tasks)
        elif choice == "4":
            print("📁 Saving tasks... Goodbye!")
            save_tasks(tasks)
            break
        else:
            print("⚠️ Invalid choice! Please enter a number between 1-4.")

# Run the program
if __name__ == "__main__":
    main()
