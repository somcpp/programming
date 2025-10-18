let friends = [];

function addFriend(){
    let name = document.getElementById("name").value.trim();//get the name
    let amount = parseFloat(document.getElementById("amount").value);//get the amount

    if(name === "" || isNaN(amount) || amount<0){
        alert("Please enter a valid name and amount.");
        return;
    } //check name and amount

    friends.push({name,amount}); //push each friend to the array
    updateFriendList();
    document.getElementById("name").value = ""; //empty the name 
    document.getElementById("amount").value = "";
}

function updateFriendList(){
    let list = document.getElementById("friend-list");
    list.innerHTML = "";
    friends.forEach((friend,index)=>{
        let li = document.createElement("li");
        li.textContent = `${friend.name}: rs.${friend.amount}`;
        list.appendChild(li);
    });
}

function calculateExpenses() {
    if(friends.length === 0) {
        alert("Please add at least one friend.");
        return;
    }

    let totalAmount = friends.reduce((sum,friend)=> sum + friend.amount, 0);
    let average = totalAmount/friends.length;
    let resultDiv = document.getElementById("result");
    resultDiv.innerHTML = "<h3> Expense Summary </h3>";

    friends.forEach(friend => {
        let balance = friend.amount - average;
        let message = balance < 0
        ? `${friend.name} has to pay rs.${Math.abs(balance).toFixed(2)}`
        : `${friend.name} will get rs.${balance.toFixed(2)}`;
        let p = document.createElement("p");
        p.textContent = message;
        resultDiv.appendChild(p);
    });
}
