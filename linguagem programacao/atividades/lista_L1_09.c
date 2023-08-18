#include <stdio.h>

//Faça um programa que leia um número N e apresente todos os divisores de N (do menor para o maior, de 1 a N-1).

int main(){
    int num;

    scanf("%d", &num);
    for (int div=1; div<num; div++){
        if (num%div == 0){
            printf("%d\n", div);
        }
    }
}
