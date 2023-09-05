#include <stdio.h>

//E25) Faça um programa que leia uma String e apresente todos os prefixos da string.

void prefixos(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        for (int j = 0; j < i+1; j++){
            printf("%c", str[j]);
        }
        if (str[i+1] != '\0'){
            printf("\n");
        }
    }
}

int main(void){
    char str[100];

    scanf("%s", str);
    prefixos(str);
}