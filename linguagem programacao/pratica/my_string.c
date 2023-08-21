#include <stdio.h>
#include "my_string.h"

char *input(char *str, char *string){
    int i = 0;
    char c;

    printf("%s", str);
    while((c = getchar()) != '\n'){
        string[i] = c;
        i++;
    }
    string[i] = '\0';

    return string;
}

