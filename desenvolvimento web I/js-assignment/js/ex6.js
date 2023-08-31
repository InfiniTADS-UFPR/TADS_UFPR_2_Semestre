console.log("// Exercício 6\n");

/* Crie uma função que procura por uma substring dentro um uma string. Caso o trecho
procurado exista na string, a função retorna a posição em que o trecho começa.
Caso contrário, a função deve retornar o valor -1. */

function procuraSubstring(string, substring) {
    for (let i = 0; i < string.length; i++) {
        let j = 0;
        while (j < substring.length && string[i + j] == substring[j]) {
            j++;
        }
        if (j == substring.length) {
            return i;
        }
    }
    return -1;
}

let str = "Aula de web1"

console.log("String: ", str);
console.log("Busca 'web1': ", procuraSubstring(str,"web1"))
console.log("Busca 'web2': ", procuraSubstring(str,"web2"))