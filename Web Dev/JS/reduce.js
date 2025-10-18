let arr = [1,9,4,7,5,6,2,4,3,12];
console.log(arr);

let x = arr.reduce(function(a,b){
    return a+b;
});

console.log(x);
