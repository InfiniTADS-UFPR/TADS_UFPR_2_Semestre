#ifndef MY_STRING_H
#define MY_STRING_H

char *input(char *str, char *string, int size);
int length(char *string);
char *toLower(char *string);
char *toUpper(char *string);
char *concat(char *string, char *string2);
char *copy(char *string, char *string2);
char *reverse(char *string);
int compare(char *string, char *string2);
int include(char *string, char *string2);
int find(char *string, char *string2);

#endif // MY_STRING_H