#include <stdio.h>
#include <string.h>

int main(){
    char numero[100];
    int cont = 0;

    scanf("%s", numero);
    for (int i = 0; i < strlen(numero); i++){
        if (numero[i] == '1'){
            cont++;
        }
    }

    printf("%d", cont);

}