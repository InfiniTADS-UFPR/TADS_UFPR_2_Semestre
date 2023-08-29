#include <stdio.h>

//E2_21) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia um número e procure esse número no vetor. E apresente o índice de todas as ocorrências localizadas, caso contrário -1.

int main(void){
    int vetor[10], num, cont = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &num);

    for (int i = 0; i < 10; i++){
        if (vetor[i] == num){
            printf("%d\n", i);
            cont++;
        }
    }
    if (cont == 0){
        printf("-1\n");
    }
}