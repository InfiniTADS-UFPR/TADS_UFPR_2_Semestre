#include <stdio.h>

//Dados um vetor com a capacidade de 33 elementos, sendo que os 32 primeiros elementos representam dígitos binários (0,1) e o 33 o terminador da string. O conteúdo deverá ser lido como uma String (gets).
//Apresente-os formatando-os de forma que sejam apresentados blocos de 4 dígitos e um espaço entre os 8 blocos.

void show(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (i % 4 == 0 && i != 0){
            printf(" ");
        }
        printf("%c", str[i]);
    }
}

int main(void){
    char bin[33];

    gets(bin);
    show(bin);
}