Tecnologia em Análise e Desenvolvimento de Sistemas

Setor de Educação Profissional e Tecnológica - SEPT

Universidade Federal do Paraná - UFPR

---

*DS122 - Desenvolvimento de Aplicações Web 1*

Prof. Alexander Robert Kutzke

- [Instruções para submissão de tarefas e trabalhos](https://gitlab.tadsufpr.net.br/ds122-alexkutzke/material/blob/master/instrucoes_submissao_tarefas_e_trabalhos.md);
- [Video aula](https://www.youtube.com/watch?v=d6ZTnQNhoCo)

# Exercícios Iniciais Javascript

Responda os exercícios a seguir. Cada exercício deve ser resolvido em um dos
arquivos com extensão `js` que estão no repositório. 
Utilize o arquivo `console.html` para testar seus scripts
(lembre-se de alterar a tag `<script>` para carregar os arquivos de cada exercício).

## Exercício `seguranca.js`

- [x] Crie uma função que retira os caracteres `'<', '>' ,'.' e '/'` de uma string.

Veja um exemplo no arquivo `seguranca.js`. 

## Exercício `extensao.js`

- [x] Armazene a extensão da `imagemRecebida` em uma variável, depois compare se essa extensão consta na variável `minhasExtensoes`. Se o formato for png ou gif imprima "recebido", se não for, imprima "formato inválido".

Dica: existe um método (uma função) chamada `split()` que divide sua string em partes dependendo do caractere selecionado,
caso queira usar esse método, basta digitar no fim da variável: `.split('aquiVaiOCaractereParaDividirAString')`

Existe um outro método bem útil chamado `.pop()`, tente usar ele após o `.split()` e veja o que acontece.


## Exercício `aleatorio.js`

- [x] Crie um vetor constante cujo conteúdo tenha tags HTML e crie uma função que usa a geração de números aleatórios
para imprimir UMA das tags HTML do vetor. Chame a função no console algumas vezes

Dica: Para gerar números aleatórios use: `Math.floor(Math.random() * 3) // Esse exemplo gera os números: 0, 1 ou 2`

## Exercício `dropDatabase.js`

- [x] Crie uma função que verifica se a string "DROP DATABASE" está contida na variável `textoRecebido`. Sua função recebe o texto como parâmetro e retorna `true` se encontrar "DROP DATABASE" e `false` caso contrário. Armazene o retorno da função
em uma variável e imprima "nice try!" caso ela seja `true`.

Dica: Existe um método (uma função) chamada `.includes()` que retorna `true` caso tenha encontrado a string

```js
const a = ['teste', 'ola', 'mundo']
a.includes("coloqueAquiAStringParaBusca")
```
