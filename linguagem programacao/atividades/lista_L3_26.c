#include <stdio.h>

//E26) Faça um programa que leia uma String e apresente todos os sufixos da string.

void sufixos(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        for (int j = i; str[j] != '\0'; j++){
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
    sufixos(str);
}