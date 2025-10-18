console.table([])
//dont use var


//Primitive ->Pass by value
/*
7 types : string, number,boolean,null,undefined,symbol,BigInt
*/

//Primitive ->Pass by reference
/*
Array ,Objects,Functions
*/

// stack (primitive) , Heap(Non-Primitive)

//const newString = gameName.substring(0,4)
//const newString = gameName.slice(-8,4)  -> allows negative integers
//trim ->removes starting and ending spaces
// console.log(balance.toFixed(1));

// const allHeros = marvel.concat(dchero)

jsUser.greeting = function(){
    console.log("Hello Js user")
}

console.log(jsUser.greeting());

const regularUser = {
    email: "Some@gmail.com",
    fullName: {
        UserFullName:{
            firstName: "hitesh",
            lastName: "fian"
        }
    }
}

console.log(regularUser.fullName.UserFullName.firstName);

const obj1 = {1: "a" , 2: "b"}
const obj2 = {1: "a" , 2: "b"}
const obj3 = {1: "a" , 2: "b"}

const obj4 = Object.assign({},obj1,obj2,obj3);

const users = [
    {
        id: 1,
        email: "ajfi@jiao.com"
    },
    {
        id: 1,
        email: "ajfi@jiao.com"
    }
]

const user = {
    username: "hitesh",
    price : 999,
    welcomeMessage: function(){
        console.log(`${this.username},welcome to web`);
    }
}

const addTwo = (num1 ,num2) => (num1 + num2)


//IIFE
(function chai(){
    console.log("Hello");
})()