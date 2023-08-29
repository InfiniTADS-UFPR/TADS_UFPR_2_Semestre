#include <stdio.h>

//E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.

int main(void){
    int vetor[3][4], i, j, soma[4] = {0,0,0,0};

    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            scanf("%d", &vetor[i][j]);
            soma[j] += vetor[i][j];
        }
    }

    for (i=0; i<4; i++){
        printf("%d\n", soma[i]);
    }
}