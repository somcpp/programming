// let anchorElement = document.getElementById('fanchor');

// anchorElement.addEventListener('click',function(){
//     event.preventDefault();
//     anchorElement.textContent = "click done";
// });

let paras = document.querySelectorAll('p');

// function alertPara(event) {
//     alert("you have clicked on para: " + event.target.textContent) ;
// }
function alertPara(event) {
    if(event.target.nodeName === 'span') {
       alert("you have clicked on para: " + event.target.textContent) ; 
    }
    
}
for(let i = 0; i<paras.length;i++){
    let para = paras[i];
    // para.addEventListener('click',function(){
    //     alert("You have clicked on para: "+(i+1));
    // })
    para.addEventListener('click',alertPara);
}