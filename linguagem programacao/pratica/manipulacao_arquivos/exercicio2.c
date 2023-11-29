#include <stdio.h>

/*02) Faça um programa em Linguagem C que receba do usuário um arquivo, e mostre na tela
quantas linhas esse arquivo possui.*/

int main(){
    char *arquivo;
    char ch[30];
    FILE *fp;
    int linhas=0;

    printf("Informe um arquivo: ");
    scanf("%s",arquivo);


    if((fp=fopen(arquivo, "r")) == NULL){
        printf("Erro na abertura do arquivo, verifique o caminho e tente novamente");
        fclose(fp);
        return -1;
    }

    while(!feof(fp)){
        fgets(ch, 30, fp);
        printf("%s", ch);
        linhas++;
    }
    printf("Número de linhas: %d", linhas);
    fclose(fp);
    return 0;
}

