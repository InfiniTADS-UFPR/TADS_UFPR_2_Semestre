const minhasExtensoes = ["png", "gif"];

let imagemRecebida = "logoUFPR.png";

/* Armazene a extensão da imagemRecebida em uma variável, depois compare se essa extensão consta na variável
"minhasExtensoes". Se o formato for png ou gif imprima "recebido", se não for, imprima "formato inválido". 
*/
console.log("## extensao.js \n");
console.log("imagemRecebida: " + imagemRecebida);
let extensao = imagemRecebida.split(".").pop();
if (extensao == "png" || extensao == "gif") {
    console.log("recebido");
} else {
    console.log("formato inválido");
}

console.log("\n");
