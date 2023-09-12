#include <stdio.h>
#include <string.h>

//E27) Faça um programa que leia uma String e apresente todos os sufixos da string em ordem léxica.

void sufixos(char str[], int size){
    int i, j, aux, key, tot;
    char suffix[size][size+1];
    int ordem[size];
    
    for (i = 0; str[i] != '\0'; i++){
        for (j = i; str[j] != '\0'; j++){
            suffix[i][j-i] = str[j];
        }
        suffix[i][j-i] = '\0';
    }

    for (int i = 0; i < size; i++){
        ordem[i] = i;
    }

    tot=size;
    do {
        key=0;
        tot--;
        for (int a=0; a<tot; a++){
            if (strcmp(suffix[ordem[a]], suffix[ordem[a+1]])>0){
                aux = ordem[a];
                ordem[a] = ordem[a+1];
                ordem[a+1] = aux;
                key=1;
            }
        }
    } while(key==1); 

    for (i = 0; i < size; i++){
        printf("%s\n", suffix[ordem[i]]);
    }

}

int main(void){
    char str[100];

    scanf("%s", str);
    sufixos(str, strlen(str));
}