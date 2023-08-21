#include <stdio.h>
#include "my_string.h"

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

