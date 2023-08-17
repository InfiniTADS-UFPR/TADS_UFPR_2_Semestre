#include <stdio.h>

//Faça um programa que leia dois números A e B e apresente o maior divisor comum dos dois números

int main(){
    int a,b,mdc;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int x=1; x<=(a+b)/2; x++){
        if (a%x == 0 && b%x == 0){
            mdc = x;
        }
    }
    printf("%d", mdc);
}
