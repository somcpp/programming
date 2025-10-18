// function makeName(
//     firstName: string,
//     lastName: string,
//     middleName: string = "middle"
// ) {
//     if (middleName) return firstName + " " + middleName + " " + lastName;
//     return firstName + " " + lastName;
// }
// function callfunc(
//     func: (f: string, l: string, m?: string) => string,
//     param1: string,
//     param2: string
// ) {
//     func(param1, param2)
// }
// callfunc(makeName, "Tim", "Ruscika")
// function mul(x, y) {
//     return x * y;
// }
// function div(x, y) {
//     return x / y;
// }
// function applyFunc(funcs, values) {
//     var results = [];
//     for (var i = 0; i < funcs.length; i++) {
//         var args = values[i];
//         var result = funcs[i](args[0], args[1]);
//         results.push(result);
//     }
//     return results;
// }
// arr = applyFunc([mul, div], [[1, 2], [4, 5]]);
// console.log(arr)
