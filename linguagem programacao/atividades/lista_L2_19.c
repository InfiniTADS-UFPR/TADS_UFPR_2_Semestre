#include <stdio.h>

/*E2_19) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. No caso de empate, apresente os valores com igual frequência). */

void mod(int vetor[], int moda[], int size){
    int frequencia[size];
    int maior = 0;

    for (int i = 0; i < size; i++){
        int cont = 0;
        for (int j = 0; j < size; j++){
            if (vetor[i] == vetor[j]){
                cont++;
            }
        }
        frequencia[i] = cont;
        if (frequencia[i] > maior){
            maior = frequencia[i];
        }
    }

    for (int i = 0; i < size; i++){
        if (frequencia[i] == maior){
            for (int j = 0; j < size; j++){
                if (vetor[i] == moda[j]){
                    break;
                }
                if (moda[j] == 0){
                    moda[j] = vetor[i];
                    break;
                }
            }
        }
    }
}

int main(void){
    int vetor[10], moda[10];
    char c;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        moda[i] = 0;
    }
    mod(vetor, moda, 10);
    for (int i = 0; i < 10; i++){
        if (moda[i] != 0){
            printf("%d\n", moda[i]);
        }
    }
}