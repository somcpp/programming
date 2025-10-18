let arr = [1,4,2,7,3];
console.log(arr);

arr = arr.sort(function(a,b){
    return a-b;
});
console.log(arr);

arr = arr.sort((a,b) => Math.abs(a)-Math.abs(b));
