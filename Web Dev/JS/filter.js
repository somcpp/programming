// function fun(ele){
//     if(ele%2!=0) return true;
//     else return false;
// }
let arr = [1,9,2,3,5,8,4,5,0,9];
console.log(arr);

// let brr = arr.filter(fun);
// console.log(brr);

// arr = arr.filter((ele)=>{
//     if(ele%2==0) return true;
//     else return false;
// });
// console.log(arr);

arr = arr.filter(ele=> (ele<6));
console.log(arr);
