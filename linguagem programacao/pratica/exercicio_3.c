#include<stdio.h>

//Faça um programa que apresente os números de 1 a 15 na forma de um triangulo.

int main(void) {
    int y = 1;
    int sum = 2;
    for (int x=1; x<=15; x++){
        printf("%d\t", x);
        if (x == y){
            printf("\n");
            y = y + sum;
            sum++;
        }
    }
}

/*Saida
1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15*/
