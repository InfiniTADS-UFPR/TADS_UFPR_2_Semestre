#include <stdio.h>
#include "my_string.h"

char *input(char *str, char *string, int size){
    int i = 0;
    char c;

    printf("%s", str);
    while((c = getchar()) != '\n' && i < size - 1){
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

char *copy(char *string, char *string2){
    int len = length(string2);

    for(int i = 0; i < len; i++){
        string[i] = string2[i];
    }
    string[len] = '\0';

    return string;
}

char *reverse(char *string){
    int len = length(string);
    char aux;

    for(int i = 0; i < len/2; i++){
        aux = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = aux;
    }
    return string;
}

int compare(char *string, char *string2){
    int len = length(string);
    int len2 = length(string2);

    if(len != len2){
        return 0;
    }
    for(int i = 0; i < len; i++){
        if(string[i] != string2[i]){
            return 0;
        }
    }
    return 1;
}

int include(char *string, char *string2){
    int len = length(string);
    int len2 = length(string2);
    int j = 0;

    for(int i = 0; i < len; i++){
        if(string[i] == string2[j]){
            j++;
        }else{
            j = 0;
        }
        if(j == len2){
            return 1;
        }
    }
    return 0;
}

int find(char *string, char *string2){
    int len = length(string);
    int len2 = length(string2);
    int j = 0;

    for(int i = 0; i < len; i++){
        if(string[i] == string2[j]){
            j++;
        }else{
            j = 0;
        }
        if(j == len2){
            return i - len2 + 1;
        }
    }
    return -1;
}



