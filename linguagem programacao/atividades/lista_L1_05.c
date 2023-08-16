#include <stdio.h>

int main(){
    int num = 1;
    int maior = -100000;

    for (int x=0; x<10; x++){
        scanf("%d", &num);
        if (num > maior){
            maior = num;
        }
    }
    printf("%d", maior);
}