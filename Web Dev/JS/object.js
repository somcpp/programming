// Object is kind of like map/dictionnary where we have key -value pairs
let x = {
    name: "Raghav",
    age: 24,
    percentage: 92.5,
    isMarried: false,
    "hi" : Hello
};
console.log(x);

console.log(x.name,x.percentage,x["is Married"]);

for (const key in x) {
    if (Object.prototype.hasOwnProperty.call(x, key)) {
        console.log(key,x[key]);
        
    }
}
for (const key of x) {
    console.log(key,x.key);
}