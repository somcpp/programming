const taskInput = document.getElementById("taskInput");
const addTaskButton = document.getElementById("addTaskButton");
const taskList = document.getElementById("taskList");

function loadTasks() {
    const tasks = JSON.parse(localStorage.getItem("tasks")) || [];
    tasks.forEach(task => createTaskElement(task.text, task.completed));
}

function saveTasks() {
    const tasks = [];
    document.querySelectorAll("li").forEach(li => {
        tasks.push({
            text: li.querySelector("span").textContent,
            completed: li.querySelector("span").classList.contains("completed")
        });
    });
    localStorage.setItem("tasks", JSON.stringify(tasks));
}
function createTaskElement(taskText, completed = false){
    const li = document.createElement("li");

    const taskSpan = document.createElement("span");
    taskSpan.textContent = taskText;

    if(completed){
        taskSpan.classList.add("completed");
    }

    const doneButton = document.createElement("button");
    doneButton.textContent = "Done"
    doneButton.classList.add("delete");

    doneButton.addEventListener("click",function(){
        taskSpan.classList.toggle("completed");
        saveTasks();
    });

    const removeButton = document.createElement("button");
    removeButton.textContent = "Remove";
    removeButton.style.background = "black";  // Styling to differentiate it
    removeButton.style.color = "white";

    removeButton.addEventListener("click",function(){
        li.remove();
        saveTasks();
    })

    li.appendChild(taskSpan);
    li.appendChild(doneButton);
    li.appendChild(removeButton);
    taskList.appendChild(li);
    taskInput.value = "";
    saveTasks();
}

function addTask(){
    const taskText = taskInput.value.trim();

    if (taskText === "") {
        alert("Please enter a task!");
        return;
    }
    createTaskElement(taskText);
    
}

addTaskButton.addEventListener("click",addTask);

loadTasks();