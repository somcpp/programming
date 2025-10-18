document.addEventListener("DOMContentLoaded", () => {
    const expenseName = document.getElementById("expense-name");
    const expenseAmount = document.getElementById("expense-amount");
    const submitbtn = document.getElementById("submitbtn");
    const expenseList = document.getElementById("expense-list");
    const totalAmount = document.getElementById("total-amount");

    let total = 0; // Track total expenses

    submitbtn.addEventListener("click", () => {
        const Name = expenseName.value.trim();
        const value = parseFloat(expenseAmount.value);

        // Validation
        if (Name === "" || isNaN(value) || value <= 0) {
            alert("Please enter a valid expense name and amount!");
            return;
        }

        // Create list item
        const li = document.createElement("li");
        li.innerHTML = `
            <p data-amount="${value}">${Name} - $${value.toFixed(2)}</p>
            <button class="remove">Remove</button>
        `;

        expenseList.appendChild(li);

        // Update total amount
        total += value;
        totalAmount.textContent = `Total: $${total.toFixed(2)}`;

        // Clear input fields
        expenseName.value = "";
        expenseAmount.value = "";
    });

    // Remove expense using stored amount in `data-amount`
    expenseList.addEventListener("click", (e) => {
        if (e.target.classList.contains("remove")) {
            const li = e.target.parentElement;
            const amount = parseFloat(li.querySelector("p").getAttribute("data-amount"));

            total -= amount;
            totalAmount.textContent = `Total: $${total.toFixed(2)}`;

            li.remove();
        }
    });
});
