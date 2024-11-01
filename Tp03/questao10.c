#include <stdio.h>
#include <ctype.h>

int main(){
    int posicoes=0;
    char frase[100];
    char cifra;

    printf("digite a quantidade de posições: ");
    scanf("%d", &posicoes);

    scanf("%*c");

    printf("frase: ");
    scanf("%[^\n]s", frase);
 
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] != ' '){
            int letra = toupper(frase[i]) - 'A';
            cifra = ((letra + posicoes) % 26) + 'A';
            printf("%c", cifra);
        } else {
            printf("%c", ' ');
        }
        
    }
    return 0;
}