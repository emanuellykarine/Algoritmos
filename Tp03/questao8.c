#include <stdio.h>
#include <string.h>

int main(){
    char string1[100];
    char string2[100];
    char concatenacao[200];

    scanf("%s", string1);
    scanf("%s", string2);

    for (int i = 0; string1[i] != '\0'; i++){
        concatenacao[i] = string1[i];
    }

    int a = strlen(string1);
    for (int i = 0; string2[i] != '\0'; i++){
            concatenacao[a] = string2[i];
            a++;
    }

    printf("strings concatenadas: %s\n", concatenacao);

    return 0;
}