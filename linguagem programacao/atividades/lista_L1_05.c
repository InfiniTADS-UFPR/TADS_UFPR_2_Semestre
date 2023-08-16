#include <stdio.h>

//E1_05) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz)

int main(){
    int num = 1;
    int maior = -100000;

    for (int x=0; x<10; x++){
        scanf("%d", &num);
        if (num > maior){
            maior = num;
        }
    }
    printf("%d", maior);
}