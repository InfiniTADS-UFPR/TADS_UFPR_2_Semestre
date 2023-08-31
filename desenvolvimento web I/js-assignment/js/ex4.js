console.log("// Exercício 4\n");

/* Crie uma função que inverte os elemento de um array. Essa função deve ser do
tipo `in-place`, ou seja, deve realizar a inversão **sem a necessidade** de um
**array auxiliar**. */

function interte(array) {
    for (let i = 0; i < array.length / 2; i++) {
        let j = array.length - 1 - i;
        let aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }
}

let a = [];
let b = [1, 2, 3];
let c = [1, 2, 3, 4, 5, 6];

console.log('Array "a" antes da inversão: ', a);
interte(a);
console.log('Array "a" depois da inversão: ', a);

console.log('Array "b" antes da inversão: ', b);
interte(b);
console.log('Array "b" depois da inversão: ', b);

console.log('Array "c" antes da inversão: ', c);
interte(c);
console.log('Array "c" depois da inversão: ', c);

console.log("\n");