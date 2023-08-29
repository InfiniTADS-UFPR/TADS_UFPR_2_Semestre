#include <stdio.h>

//E2_18) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um.

int main(void){
    int vetor[10];

    for (int i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    for (int i=0; i<9; i++){
        if (vetor[i]-vetor[i+1]==1 || vetor[i]-vetor[i+1]==-1){
            printf("%d ", vetor[i]);
            printf("%d\n", vetor[i+1]);
        }
    }
}