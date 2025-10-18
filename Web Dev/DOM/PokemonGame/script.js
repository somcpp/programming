var main = document.getElementById("main");
let arr = [`https://i.pinimg.com/736x/3f/72/2e/3f722e7be5a952584063a35048820e89.jpg"`,`https://i.pinimg.com/736x/2f/5a/d2/2f5ad2bb24fde7148466640808ca34cb.jpg`,`https://i.pinimg.com/736x/f2/25/95/f22595de60087e3de0e8e6dbe99770fd.jpg`,`https://i.pinimg.com/736x/c1/1d/82/c11d825a820d5a3fc725c0c02fb1d637.jpg`,`https://i.pinimg.com/736x/06/54/6f/06546facfceddfd46d50776ab539bca1.jpg`];
var s = "";
for(i = 1;i<=50;i++){
    let num = Math.floor(Math.random()*(arr.length));
    s += `<div class="card">
            <img src="${arr[num]}" class="image" alt="">
        </div>`;
}
main.innerHTML = s;