#include<stdio.h>

//E1_07) Faça um programa que leia três números e os apresente em ordem crescente.

int main() {
    int numeros[3];
    int aux, key, tot=3;
    
    scanf("%d", &numeros[0]);
    scanf("%d", &numeros[1]);
    scanf("%d", &numeros[2]);
    
    do {
        key=0;
        tot--;
        for (int a=0; a<tot; a++){
            if (numeros[a]>numeros[a+1]){
                aux = numeros[a];
                numeros[a] = numeros[a+1];
                numeros[a+1] = aux;
                key=1;
            }
        }
    } while(key==1);
    
    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[1]);
    printf("%d\n", numeros[2]);
}