// let firstPromise = new Promise((resolve,reject) =>{
//     console.log("som");
//     reject(new Error("Internal Server Error"));
// });

// let promise1 = new Promise((resolve,reject)=>{
//     let success = false;
//     if(success) {
//         resolve("Promise Fulfilled");
//     }
//     else{
//         reject("Promise rejected");
//     }
// });

// promise1.then((message) =>{
//     console.log("then ka message is" + message);
// }).catch((error){
//     console.log("Error: "+ error);
// }
// )

let promise1 = new Promise((resolve,reject)=>{
    setTimeout(resolve,1000,"first");
})
let promise2 = new Promise((resolve,reject)=>{
    setTimeout(resolve,1000,"second");
})
let promise3 = new Promise((resolve,reject)=>{
    setTimeout(resolve,1000,"third");
})

Promise.all([promise1,promise2,promise3])
.then((values)=>{
    console.log("values");
})