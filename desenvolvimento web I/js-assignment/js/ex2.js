console.log("// Exercício 2\n");

/* Escreva um programa que cria uma string que representa um quadro 8x8, utilizando
o caractere de nova linha `"\n"` para separar cada uma das linhas. Por exemplo:
`"linha1..\nlinha2.."`. Cada posição do quadro deve ser representada por um espaço
em branco (`" "`) ou um `"#"`. Os caracteres devem produzir a forma de um tabuleiro
de xadrez. */

let saida2 = '';
let tam = 8;

for (let i = 0; i < tam; i++) {
    for (let j = 0; j < tam; j++)
        if ((i + j) % 2 == 0){
            saida2 += " ";
        } else {
            saida2 += "#";
        }
    saida2 += "\n";
}

console.log(saida2);
console.log("\n");