#include <stdio.h>
#include <string.h>

int menor(int val1, int val2){
    if (val1 <= val2){
        return val1;
    } else {
        return val2;
    }
}

int distLevens (char str1[], char str2[]){
    int len1 = strlen(str1), len2 = strlen(str2), x, y, cost;
    int tabela[100][100];

    for (x=0; x <= len1; x++){
        tabela[x][0] = x;
    }
    for (y=0; y <= len2; y++){
        tabela[0][y] = y;
    }

    for (x=1; x <=len1; x++){
        for (y=1; y<=len2; y++){
            if (str1[x-1] == str2[y-1]){
                cost = 0;
            } else{
                cost = 1;
            }
            tabela[x][y] = menor(tabela[x-1][y]+1, menor(tabela[x][y-1]+1, tabela[x-1][y-1]+cost));

        }
    }

    for (x=0; x<=len1; x++){
        for(y=0; y<=len2; y++){
            printf(" %d ", tabela[x][y]);
        }
        printf("\n");
    }

    return tabela[len1][len2];
}

int main(void){
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);
    printf("Dist(%s, %s)=%d\n", str1, str2, distLevens(str1, str2));
    //printf("Dist(pano, plano)=%d\n", distLevens("pano", "plano"));
    //printf("Dist(casa, vaza)=%d\n", distLevens("casa", "vaza"));
    //printf("Dist(luis, luiz)=%d\n", distLevens("luis", "luiz"));
}