#include <stdio.h>

char *my_gets(char *string){
    int i = 0;
    char c;

    while((c = getchar()) != '\n'){
        string[i] = c;
        i++;
    }
    string[i] = '\0';

    return string;
}

int main(void){
    char string[100];

    printf("Digite uma string:\n");
    my_gets(string);
    printf("String digitada: %s\n", string);
    scanf("%*c");
}