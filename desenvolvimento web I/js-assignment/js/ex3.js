console.log("// Exercício 3\n");

//Crie uma função que retorna a soma dos elementos de um array.

function soma(array) {
    let soma = 0;
    for (let i = 0; i < array.length; i++) {
        soma += array[i]; 
    }
    return soma;
}

console.log('Soma de []: ');
console.log(soma([]));
console.log('Soma de [1, 2, 3]: ');
console.log(soma([1, 2, 3]));
console.log('Soma de [1, 2, 3, 4, 5, 6]: ');
console.log(soma([1, 2, 3, 4, 5, 6]));

console.log("\n");

