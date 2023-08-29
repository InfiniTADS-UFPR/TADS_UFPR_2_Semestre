#include <stdio.h>

//E2_15) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente os elementos em que a soma dos índices i e j sejam pares. Respeite a ordem de apresentação linha,coluna.

int main(void){
    int vetor[3][4], i, j;

    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            scanf("%d", &vetor[i][j]);
        }
    }

    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            if ((i+j)%2 == 0){
                printf("%d\n", vetor[i][j]);
            }
        }
    }
}