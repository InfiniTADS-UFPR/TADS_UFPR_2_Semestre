console.log("// Exercício 5\n");

//Crie uma função que conta a quantidade de aparições de uma dada letra em uma string.

function contaLetras(string, letra) {
    let count = 0;
    for (let i = 0; i < string.length; i++) {
        if (string[i] == letra) {
            count++;
        }
    }
    return count;
}

let s = "Paralelepipedo"
console.log("String: ", s);
console.log("Busca letra 'e': ", contaLetras(s,"e"));
console.log("Busca letra 'a': ", contaLetras(s,"a"));
console.log("Busca letra 'l': ", contaLetras(s,"l"));

console.log("\n");