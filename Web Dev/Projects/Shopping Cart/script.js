document.addEventListener("DOMContentLoaded", () => {
    const products = [
        { id: 1, name: "Product 1", price: 29.90 },
        { id: 2, name: "Product 2", price: 19.90 },
        { id: 3, name: "Product 3", price: 89.90 },
    ];

    const cart = [];
    const productList = document.getElementById("product-list");
    const cartItems = document.getElementById("cart-items");
    const emptyCartMessage = document.getElementById("empty-cart");
    const cartTotalMessage = document.getElementById("cart-total");
    const totalPriceDisplay = document.getElementById("total-price");
    const checkOutBtn = document.getElementById("checkout-btn");

    // 🛒 Display Products
    products.forEach(product => {
        const productDiv = document.createElement('div');
        productDiv.classList.add("product");
        productDiv.innerHTML = `
        <span>${product.name} - $${product.price}</span>
        <button data-id="${product.id}">Add to cart</button>
        `;
        productList.appendChild(productDiv);
    });

    // ➕ Add to Cart
    productList.addEventListener("click", (e) => {
        if (e.target.tagName === "BUTTON") {
            const productId = parseInt(e.target.getAttribute("data-id"));
            const product = products.find(p => p.id === productId);
            addToCart(product);
        }
    });

    function addToCart(product) {
        cart.push(product);
        renderCart();
    }

    // 🛍 Render Cart Items
    function renderCart() {
        cartItems.innerHTML = "";
        let totalPrice = 0;

        if (cart.length > 0) {
            emptyCartMessage.classList.add('hidden');
            cartTotalMessage.classList.remove("hidden");

            cart.forEach(item => {
                totalPrice += item.price;

                const cartItem = document.createElement('div');
                cartItem.classList.add("product");
                cartItem.innerHTML = `
                ${item.name} - $${item.price}
                `;

                const removeBtn = document.createElement('button');
                removeBtn.textContent = "Remove";
                removeBtn.setAttribute("data-id", item.id);
                removeBtn.addEventListener("click", () => {
                    removeFromCart(item.id);
                });

                cartItem.appendChild(removeBtn);
                cartItems.appendChild(cartItem);
            });

            totalPriceDisplay.textContent = `$${totalPrice.toFixed(2)}`;
        } else {
            emptyCartMessage.classList.remove("hidden");
            cartTotalMessage.classList.add("hidden");
            totalPriceDisplay.textContent = "$0.00";
        }
    }

    // ❌ Remove from Cart
    function removeFromCart(itemId) {
        const itemIndex = cart.findIndex(p => p.id === itemId);
        if (itemIndex !== -1) {
            cart.splice(itemIndex, 1);
            renderCart();
        }
    }

    // ✅ Checkout
    checkOutBtn.addEventListener('click', () => {
        cart.length = 0;
        renderCart();
        alert("Checkout successful!");
    });
});
