#include <stdio.h>
#include <string.h>

//E28) Faça um programa que leia uma string e apresente os símbolos e a frequência (número de ocorrência de cada símbolo na string lida). O programa deverá apresentar um símbolo e a frequência por linha e omitir os símbolos que não ocorram (frequência zero). Considere o intervalo de 32 a 128 da tabela ASCII.

void frequencia(char *str, int *freq){
    int i;
    for(i = 0; i < strlen(str); i++){
        freq[str[i]]++;
    }
}

int main(void){
    char str[100];
    int freq[128] = {0};
    scanf("%s", str);
    frequencia(str, freq);
    for(int i = 32; i < 128; i++){
        if(freq[i] != 0){
            printf("%c %d\n", i, freq[i]);
        }
    }
    return 0;
}