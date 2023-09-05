#include <stdio.h>

//E31) Faça um programa que leia uma frase e apresente o número de palavras lidas. Considere todo símbolo não alfabético ou não numérico como delimitador.

int main(void){
    char str[100];
    int palavras = 0;

    gets(str);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i+1] >= 58 && str[i] <= 64 || str[i+1] >= 91 && str[i] <= 96 || str[i+1] >= 123 && str[i] <= 126 || str[i+1] == '\0'){
            palavras++;
        }
    }

    printf("%d\n", palavras+1);
}