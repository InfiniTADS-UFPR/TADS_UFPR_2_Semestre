#include <stdio.h>

//Faça um programa que leia duas strings, compare as strings e apresente na tela os valores "0" se forem iguais, "-1" se str1 for menor que str2, caso contrário "1"

int main(void){
    int result;
    char stringA[12];
    char stringB[12];

    gets(stringA);
    gets(stringB);

    result = strcmp(stringA, stringB);
    if (result > 0){
        result = 1;
    } else if (result < 0){
        result = -1;
    }

    printf("%d\n", result);
}
