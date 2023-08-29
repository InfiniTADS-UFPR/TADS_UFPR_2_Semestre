#include <stdio.h>

//E2_16) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b.

int main(void){
    int vetor[10], a, b;

    for (int i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    do{
        scanf("%d", &a);
        scanf("%d", &b);
    } while (a<0 || a>9 || b<0 || b>9);

    for (int i=a; i<=b; i++){
        printf("%d\n", vetor[i]);
    }
}