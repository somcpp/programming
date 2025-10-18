const taskInput = document.getElementById("taskInput");
const addTaskButton = document.getElementById("addTaskButton");
const tasklist = document.getElementById("taskList");

function addTask(){
    const taskText = taskInput.value.trim(); // This is how you will take input value
    if(taskText === "") {
        alert("Please enter a task!");
        return;
    }

    const li = document.createElement("li");
    li.textContent = taskText;

    const deleteButton = document.createElement("button");
    deleteButton.textContent = "Delete";
    deleteButton.classList.add("delete");

    deleteButton.addEventListener("click",function() {
        li.remove();
    });
    li.appendChild(deleteButton);
    tasklist.appendChild(li);
    taskInput.value = "";
}

addTaskButton.addEventListener("click",addTask)