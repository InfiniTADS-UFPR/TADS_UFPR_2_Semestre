#include <stdio.h>

//E30) Faça um programa que leia 10 nomes e apresente os índices do vetor de nomes lidos, de forma, que se forem utilizados na apresentação, os nomes estarão ordenados. 

void ordena(char nome[10][50], int ordem[10]){
    int aux, key, tot=10;
    for (int i = 0; i < 10; i++){
        ordem[i] = i;
    }

    do {
        key=0;
        tot--;
        for (int a=0; a<tot; a++){
            for (int c=0; c<5; c++){
                if (nome[ordem[a]][c]>nome[ordem[a+1]][c]){
                    aux = ordem[a];
                    ordem[a] = ordem[a+1];
                    ordem[a+1] = aux;
                    key=1;
                    break;
                } else if (nome[ordem[a]][c]<nome[ordem[a+1]][c]){
                    break;
                }
            }
        }
    } while(key==1);

}

int main(void){
    char nome[10][50];
    int ordem[10];

    for (int i = 0; i < 10; i++){
        scanf("%s", nome[i]);
    }

    ordena(nome, ordem);

    for (int i = 0; i < 10; i++){
        printf("%d\n", ordem[i]);
    }
}