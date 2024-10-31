#include <stdio.h>

int main(){
    char string[100];
    int cont, i;
    scanf("%s", string);
    
    for (i = 0; string[i] != '\0'; i++){
        cont++;
    }

    printf("tamanho da string %d\n", cont);
    return 0;
}