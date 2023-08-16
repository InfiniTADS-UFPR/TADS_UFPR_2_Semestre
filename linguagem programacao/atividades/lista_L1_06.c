#include<stdio.h>

int main(void){
    int num = 1;

    while(num != 0){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        else if( num%2 == 0){
            printf("par");
        }
        else{
            printf("impar");
        }
        printf("\n");
    }
}