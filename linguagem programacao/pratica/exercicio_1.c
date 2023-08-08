#include<stdio.h>

//E1) Faça um programa que apresente os números de 1 a 10, sendo que cada número deve ser impresso em uma linha e os números ímpares deslocados (\t) a direita.

int main(void) {
    for (int x=1; x <=10; x++){
        if (x%2 == 0){
            printf("%d\n", x);
        } else{
            printf("\t%d\n", x);
        }
    }
}

/*Saída
	1
2
	3
4
	5
6
	7
8
	9
10 */
