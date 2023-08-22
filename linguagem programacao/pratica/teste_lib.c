#include <stdio.h>
#include "my_string.h"

int main(void){
    char string[50];
    char string2[50];
    char string3[50];

    input("Digite uma string:\n", string);
    printf("String digitada: %s\n", string);
    printf("Tamanho da string: %d\n", length(string));
    printf("String em maiusculas: %s\n", toUpper(string));
    printf("String em minusculas: %s\n", toLower(string));
    input("Digite uma string para concatenar:\n", string2);
    printf("String concatenada: %s\n", concat(string, string2));
    copy(string3, string);
    printf("Tamanho da string concatenada: %d\n", length(string));
    printf("String invertida: %s = %s\n", string3, reverse(string));
    scanf("%*c");
}