#include <stdio.h>

//E2_17) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.

int main(void){
    int vetor[10], aux, key, tot=10;

    for (int i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    do {
        key=0;
        tot--;
        for (int a=0; a<tot; a++){
            if (vetor[a]<vetor[a+1]){
                aux = vetor[a];
                vetor[a] = vetor[a+1];
                vetor[a+1] = aux;
                key=1;
            }
        }
    } while(key==1);

    for (int i=0; i<10; i++){
        printf("%d\n", vetor[i]);
    }
}