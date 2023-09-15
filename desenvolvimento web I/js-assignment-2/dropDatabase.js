let textoRecebido = "DROP DATABASE UFPR;";

/* Crie uma função que verifica se a string "DROP DATABASE" está contido no textoRecebido. Sua função recebe o texto
como parâmetro e retorna true se encontrar "DROP DATABASE" e falso caso contrário. Armazene o retorno da função
em uma variável e imprima "nice try!" caso ela seja true */

console.log("## dropDatabase.js \n");

console.log("textoRecebido: " + textoRecebido);

function verificaDropDatabase(texto) { 
    return texto.includes("DROP DATABASE");
}

let resultado = verificaDropDatabase(textoRecebido);
if (resultado) {
    console.log("nice try!");
} else {
    console.log("tudo certo!");
}

console.log("\n");

