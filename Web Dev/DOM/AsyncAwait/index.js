// async function getData() {
//     setTimeout(()=>{
//         console.log("I am inside set timeout block");
//     },3000);
// }

// getData();

async function getData() {
    let response = await fetch('');
    let data = await response.json();
    
}