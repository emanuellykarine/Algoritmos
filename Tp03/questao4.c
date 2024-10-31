#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    char palavra [50];
    int i;
    int cont;

    printf("Digite a palavra que deseja encontrar: ");
    scanf("%s", palavra);

    scanf("%*c");

    printf("Digite a frase: ");
    scanf("%[^\n]s", frase);

    char *p = strstr(frase, palavra);
    while (p != NULL) {
        cont++;
        p = strstr(p+1, palavra);
    }
   
    printf("A palavra %s ocorre %d vezes na frase\n", palavra, cont);
    return 0;

}