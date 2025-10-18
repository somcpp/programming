// //code 1
// const t1 = performance.now();
// for(let i = 1;i<=100;i++){
//     let para = document.createElement('p');
//     para.textContent = "this is para" + i;
//     document.body.appendChild(para);
// }

// const t2 = performance.now();

// console.log("total time: "+ (t2-t1));
// //code 2
// let mydiv = document.createElement('div');

// for(let i = 1;i<=100;i++){
//     let para = document.createElement('p');
//     para.textContent = "This is para " + i;
//     mydiv.appendChild(para);
// }
// document.body.appendChild(mydiv);

let fragment = document.createDocumentFragment();

for(let i=1;i<=100;i++){
    let para = document.createElement('p');
    para.textContent = "this is para "+ i;
    fragment.appendChild(para);
}

document.appendChild(fragment);