#include<stdio.h>

int main(void) {
    int sum = 1;
    for (int x=1; x<=5; x++){
        for (int y=0; y<x; y++){
            printf("%d ", y+sum);
        }
        sum = sum+x;
        printf("\n");
    }
}

/*Saída
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 */
