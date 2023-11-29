#include <stdio.h>

/*01) Codifique, compile e execute um programa que:
a) crie/abra um arquivo texto de nome ”arq.txt”,
b) permita que o usuário entre com diversos caracteres nesse arquivo, até que o usuário
entre com o caractere ’0’
c) reinicie o arquivo, fazendo o ponteiro apontar para seu início, e
d) lendo-o caractere por caractere, e escrevendo na tela todos os caracteres
armazenados*/

int main(void){
    FILE *fp;
    char ch;

    if((fp=fopen("arq.txt", "wt")) == NULL){
        printf("Erro na abertura do arquivo, verifique o caminho e tente novamente");
        fclose(fp);
        return -1;
    }

    printf("Digite os caracteres que deseja inserir no arquivo, para finalizar digite 0\n");
    scanf("%c", &ch);
    while(ch != '0'){
        fputc(ch, fp);
        scanf("%c", &ch);
    }
    fclose(fp);

    if((fp=fopen("arq.txt", "rt")) == NULL){
        printf("Erro na abertura do arquivo, verifique o caminho e tente novamente");
        fclose(fp);
        return -1;
    }
    printf("Conteudo do arquivo:\n");
    fseek(fp, 0, SEEK_SET);
    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c\n", ch);
    }
    fclose(fp);
    return 0;
}