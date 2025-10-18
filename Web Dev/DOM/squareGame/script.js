let s1 = document.getElementById("sq1");
s1.addEventListener("mouseenter",function(){
    s1.style.backgroundColor = "red";
    let r = Math.floor(Math.random()*100);
    s1.innerHTML = r;
})
s1.addEventListener("mouseleave",function(){
    s1.style.backgroundColor = "white";
    s1.innerHTML = "1";
})
let s2 = document.getElementById("sq2");
let clr = "green";
s2.addEventListener("mouseenter",function(){
    if(clr=="green"){
        s2.style.backgroundColor = clr;
        clr = "red";
    }
    else{
        s2.style.backgroundColor = "red";
        clr = "green";
    }
})
s2.addEventListener("mouseleave",function(){
    s2.style.backgroundColor = "white";
    s2.innerHTML = "2";
})

//random color rgb(a,b,c) where a,b,c lies between 0 to 255;
let s3 = document.getElementById("sq3");
s3.addEventListener("mouseenter",function(){
    let a = Math.floor(Math.random()*256);
    let b = Math.floor(Math.random()*256);
    let c = Math.floor(Math.random()*256);
    s3.style.backgroundColor = `rgb(${a},${b},${c})`;
})
s3.addEventListener("mouseleave",function(){
    s3.style.backgroundColor = "white";
    s3.innerHTML = "3";
})

let s4 = document.getElementById("sq4");
s4.addEventListener("click",function(){
    let a = Math.floor(Math.random()*256);
    let b = Math.floor(Math.random()*256);
    let c = Math.floor(Math.random()*256);
    s3.style.backgroundColor = `rgb(${a},${255},${255})`;
    a = Math.floor(Math.random()*256);
    b = Math.floor(Math.random()*256);
    c = Math.floor(Math.random()*256);
    s2.style.backgroundColor = `rgb(${255},${255},${b})`;
    a = Math.floor(Math.random()*256);
    b = Math.floor(Math.random()*256);
    c = Math.floor(Math.random()*256);
    s1.style.backgroundColor = `rgb(${255},${c},${255})`;
})
s4.addEventListener("mouseleave",function(){
    s1.style.backgroundColor = "white";
    s2.style.backgroundColor = "white";
    s3.style.backgroundColor = "white";
})

let csr = document.getElementById("cursor");
let main = document.getElementById("main");
main.addEventListener("mousemove",function(details){
    console.log(details.x,details.y);
    csr.style.left = details.x + "px";
    csr.style.top = details.y + "px";
})