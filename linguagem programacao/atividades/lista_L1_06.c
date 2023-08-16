#include<stdio.h>

//E1_06) Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.

int main(void){
    int num = 1;

    while(num != 0){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        else if( num%2 == 0){
            printf("%d par", num);
        }
        else{
            printf("%d impar", num);
        }
        printf("\n");
    }
}