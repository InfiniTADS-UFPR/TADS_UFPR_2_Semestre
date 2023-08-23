#include <stdio.h>
#include<locale.h>
#include "my_string.h"

int main(void){
    setlocale(LC_ALL,"Portuguese");
    char string[50];
    char string2[50];
    char string3[50];

    input("Digite uma string:\n", string);
    printf("String digitada: %s\n", string);
    printf("Tamanho da string: %d\n", length(string));
    printf("String em maiusculas: %s\n", toUpper(string));
    printf("String em minusculas: %s\n", toLower(string));
    input("Digite outra string:\n", string2);
    printf("String 1: %s |\tString 2: %s\n", string, string2);
    copy(string3, string);
    printf("String concatenada: %s\n", concat(string3, string2));
    printf("Tamanho da string concatenada: %d\n", length(string3));
    printf("String invertida: %s\n", reverse(string3));
    printf("String 1 == String 2: %d\n", compare(string, string2));
    printf("String 1 inclui String 2: %d\n", include(string, string2));
    printf("String 1 contem String 2 a partir da casa: %d\n", find(string, string2));
    scanf("%*c");
}