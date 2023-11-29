#include <stdio.h>
#define BUFFER 100

/* 03) Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o
conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo). */

int main(void){
    char arquivo1[BUFFER], arquivo2[BUFFER], arquivo3[]="arquivos/arq3.txt";
    char ch[BUFFER];
    FILE *fp1, *fp2, *fp3;

    printf("Informe o primeiro arquivo: ");
    scanf("%s",arquivo1);
    printf("Informe o segundo arquivo: ");
    scanf("%s",arquivo2);

    if((fp1=fopen(arquivo1, "r")) == NULL){
        printf("Erro na abertura do arquivo 1, verifique o caminho e tente novamente");
        fclose(fp1);
        return -1;
    }

    if((fp2=fopen(arquivo2, "r")) == NULL){
        printf("Erro na abertura do arquivo 2, verifique o caminho e tente novamente");
        fclose(fp2);
        return -1;
    }

    if((fp3=fopen(arquivo3, "w")) == NULL){
        printf("Erro na abertura do arquivo 3, verifique o caminho e tente novamente");
        fclose(fp3);
        return -1;
    }

    while(!feof(fp1)){
        fgets(ch, BUFFER, fp1);
        fputs(ch, fp3);
    }

    while(!feof(fp2)){
        fgets(ch, BUFFER, fp2);
        fputs(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    
    return 0;
}