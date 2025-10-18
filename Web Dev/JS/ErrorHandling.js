// try{
//     console.log("try block starts here");
//     console.log(x);
//     console.log("try block ends here");
// }
// catch(err){
//     // console.log("I am inside catch block");
//     // console.log("Your error is here: ",err);

//     //throw keyword
//     throw new Error("Bhai pehle declare kro");
// }
// finally{
//     console.log("i am in finally block");
// }

let errorCode = 404;
if(errorCode==404){
    throw new Error("network error");
}