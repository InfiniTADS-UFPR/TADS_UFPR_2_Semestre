#include <stdio.h>

//Faça um programa que leia um número e apresente o número lido e a seguir se ele é "par" ou "impar" (sem acento)

int main(void){
    int num;

    scanf("%d", &num);
    if (num%2 == 0){
        printf("%d par", num);
    } else{
        printf("%d impar", num);
    }
}
