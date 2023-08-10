#include <stdio.h>

//Faça um programa que leia três valores inteiros (a,b,c) e apresente o maior número lido.

int main(void){
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b){
        if (a > c){
            printf("%d", a);
        } else{
            printf("%d", c);
        }
    } else if (b > c){
        printf("%d", b);
    } else{
        printf("%d", c);
    }

}
