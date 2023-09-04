#include <stdio.h>

//E22) Faça uma função que receba um vetor de char e um número e retorne no vetor os valores ‘0’ e ‘1’ correspondente ao valor binário de cada posição do número. Considere números de até 32 bits. (Considere o vetor com 33 posições). Preserve os zeros a direita do digito significativo.

void binario(int num, char str[33]){
    int i;
    for(i=31; i>=0; i--){
        str[i] = (num & 1) + '0';
        num >>= 1;
    }
    str[32] = '\0';
}

int main(void){
    int num;
    char str[33];

    scanf("%d",&num);
    binario(num, str);
    printf("%s\n",str);
}