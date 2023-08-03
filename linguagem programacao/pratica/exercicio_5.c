#include<stdio.h>

int main(void) {
    printf("Numeros primos entre 1 e 100:\n");
    for (int x=2; x<=100; x++){
        if (x%2 != 0 || x == 2){
            if (x%3 != 0 || x == 3){
                if(x%5 != 0 || x == 5 ){
                    if (x%7 != 0 || x == 7){
                        printf("%d\n", x);
                    }
                }
            }
        }
    }
}
