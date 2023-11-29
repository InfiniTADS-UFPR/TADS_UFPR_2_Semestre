#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 05) Faça um programa no qual o usuário informa o nome do arquivo, e uma palavra, e retorne
o(s) número(s) da(s) linha(s) em que a palavra ocorra no arquivo.  */

#define TAM_BUFFER 32768

int main(int argc, char *argv[])
{
    FILE *fp;
    int i;
    char buffer[TAM_BUFFER],*p;
    char *achado;
    int linha=1;

    if( argc < 2) {
        printf("use:\n buscaTexto <arquivo> <palavra> [outras palavras]\n");
        exit(-1);
    }
    if( (fp=fopen(argv[1],"rt")) == NULL ) {
        printf("Arquivo %s nao encontrado.\n",argv[1]);
        exit(-1);
    }
    achado = (char *)malloc(sizeof(char)*argc);
    memset((void *)achado, 0, argc);

    while( fgets(buffer,TAM_BUFFER,fp) != NULL ) {
        for(i=2 ; i<argc ; i++) {
            if( (p=strstr(buffer,argv[i])) != NULL ) {
                printf("%s encontrada na linha %d\n",argv[i],linha);
                achado[i]=1;
            }
        }
        linha++;
    }
    fclose(fp);
    for(i=2 ; i<argc ; i++) {
        if( !achado[i] )
           printf("%s palavra nao encontrada\n",argv[i]);
    }
    return 0;
}