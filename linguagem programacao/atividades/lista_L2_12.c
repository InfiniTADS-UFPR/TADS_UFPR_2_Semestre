#include <stdio.h>

//E2_12) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal principal.

int main(void){
    int vetor[3][3], i, j;

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &vetor[i][j]);
        }
    }

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (i == j){
                printf("%d\n", vetor[i][j]);
            }
        }
    }
}