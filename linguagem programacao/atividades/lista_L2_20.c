#include <stdio.h>

//E2_20) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no vetor. Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o valor -1.

int main(void){
    int vetor[10], num, pos = -1;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &num);
    for (int i = 0; i < 10; i++){
        if (vetor[i] == num){
            pos = i;
            break;
        }
    }
    printf("%d\n", pos);
}