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


// function mul(x: number, y: number): number {
//     return x * y;
// }
// function div(x: number, y: number): number {
//     return x / y;
// }
// function applyFunc(
//     funcs: ((a: number, b: number) => number)[], 
//     values: [number, number][] 
// ): number[] {
//     const results: number[] = [];
//     for (let i = 0; i < funcs.length; i++) {
//         const args = values[i];
//         const result = funcs[i](args[0],args[1]);
//         results.push(result);
//     }
//     return results;
// }

// applyFunc([mul, div], [[1, 2], [4, 5]])

function sum(...numbers: number[]){
    
}
 
sum(1,2,3);