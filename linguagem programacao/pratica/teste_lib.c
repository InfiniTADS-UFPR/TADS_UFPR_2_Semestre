#include <stdio.h>
#include "my_string.h"

int main(void){
    char string[100];

    printf("Digite uma string:\n");
    my_gets(string);
    printf("String digitada: %s\n", string);
    scanf("%*c");
}