/* Crie um vetor constante cujo conteúdo tenha tags HTML e crie uma função que usa a geração de números aleatórios 
para imprimir UMA das tags HTML do vetor. Chame a função no console algumas vezes */

const tags = ["<h1>Header numero 1</h1>", "<h1>Header numero 2</h1>", "<h1>Header numero 3</h1>", "<h1>Header numero 4</h1>", "<h1>Header numero 5</h1>"];

let indice = Math.floor(Math.random() * tags.length);
console.log("## aleatorio.js \n");
console.log(tags[indice]);
document.body.innerHTML += tags[indice];

console.log("\n");
