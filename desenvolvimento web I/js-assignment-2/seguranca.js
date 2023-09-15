console.log("## seguranca.js \n");

let texto = "<script>virus.js</script>";
console.log(texto);
// remova os caracteres especias: <>./
texto = texto.replace(/<|>|\.|\//g, " ");
console.log(texto);

console.log("\n");

