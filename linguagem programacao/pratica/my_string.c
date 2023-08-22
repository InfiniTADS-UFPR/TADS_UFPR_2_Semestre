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

int length(char *string){
    int i = 0;

    while(string[i] != '\0'){
        i++;
    }

    return i;
}

char *toLower(char *string){
    char c;
    int len = length(string);

    for(int i = 0; i < len; i++){
        c = string[i];
        if(c >= 'A' && c <= 'Z'){
            string[i] = c + 32;
        }
    }
    return string;
}

char *toUpper(char *string){
    char c;
    int len = length(string);

    for(int i = 0; i < len; i++){
        c = string[i];
        if(c >= 'a' && c <= 'z'){
            string[i] = c - 32;
        }
    }
    return string;
}

char *concat(char *string, char *string2){
    int len = length(string);
    int len2 = length(string2);

    for(int i = 0; i < len2; i++){
        string[len + i] = string2[i];
    }
    string[len + len2] = '\0';

    return string;
}

