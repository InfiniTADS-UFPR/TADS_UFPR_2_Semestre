#include <stdio.h>
#include "my_string.h"

int main(void){
    char string[100];

    input("Digite uma string:\n", string);
    printf("String digitada: %s\n", string);
    scanf("%*c");
}