#include<stdio.h>

int main(void) {
    printf("Tabela ASCII Extended:\n");
    for (int x=-1; x<16; x++){
        if (x >= 0){
            printf("%x ", x);
        } else{
            printf("  ");
        }
        for (int y=0; y<16; y++){
            if (x < 0){
                printf("  %x ", y);
                continue;
            }
            int value = y+(x*16);
            if (value < 32){
                printf("| %c ", 32);
            } else {
                printf("| %c ", value);
            }
        }
        printf("|\n");
    }
}
