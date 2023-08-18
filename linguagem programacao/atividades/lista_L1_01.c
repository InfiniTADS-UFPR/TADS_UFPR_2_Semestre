#include <stdio.h>

//E1_01) Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária

int main(){
    float num, dec;
    int inteiro;

    scanf("%f", &num);
    inteiro = num;
    dec = num - inteiro;

    printf("%d\n", inteiro);
    printf("%f\n", dec);
}
