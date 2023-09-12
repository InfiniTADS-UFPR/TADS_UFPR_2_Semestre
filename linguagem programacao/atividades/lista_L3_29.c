#include <stdio.h>
#include <string.h>

//E29) Faça um programa que leia duas Strings, verifique se elas formam anagramas, ignorando variação de caixa e espaços em brancos e apresente: "Formam anagramas" ou "Nao formam anagramas"

void strlwr(char *str){
    for (int i = 0; i < strlen(str); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
}

int main(void){
    char str1[100], str2[100];
    int anagrama;

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    strlwr(str1);
    strlwr(str2);

    if(strlen(str1) != strlen(str2)){
        anagrama = 0;
    } else{
        for (int i = 0; i < strlen(str1); i++){
            for (int j = 0; j < strlen(str2); j++){
                if(str1[i] == str2[j]){
                    str2[j] = ' ';
                    str1[i] = ' ';
                    break;
                }
            }
        }
        for (int i = 0; i < strlen(str2); i++){
            if(str2[i] != ' ' || str1[i] != ' '){
                anagrama = 0;
                break;
            } else{
                anagrama = 1;
            }
        }
    }

    if(anagrama == 1){
        printf("Formam anagramas");
    }else{
        printf("Nao formam anagramas");
    }
}