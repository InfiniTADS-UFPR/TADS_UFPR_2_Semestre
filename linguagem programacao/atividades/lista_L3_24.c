#include <stdio.h>
#include <string.h>

//E24) Faça um programa que leia um número, chame uma função que converterá o número binário para Strings, sem os dígitos não significativos a esquerda. No programa principal, apresente o vetor retornado usando o %s no printf.

void reverso(char str[]){
    int i, j;
    char aux;
    for(i = 0, j = strlen(str)-1; i < strlen(str)/2; i++, j--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
}

void intToString(int num, char str[]){
    int digitos = 0, i = 0;
    char c;

    while(num){
        digitos = num%2;
        num = num/2;
        c = (char) digitos + '0';
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    reverso(str);
}

int main(void){
    int num;
    char str[100];
    scanf("%d", &num);
    intToString(num, str);
    printf("%s", str);
}