#include <stdio.h>

int main(){
    int peso, gato1, gato2;
    scanf("%d", &peso);
    scanf("%d", &gato1);
    scanf("%d", &gato2);

    int pesoGramas = peso * 1000;
    int qtdRacao = (gato1 + gato2) * 5;
    int restoRacao = pesoGramas - qtdRacao;

    printf("Resto de ração após 5 dias: %d gramas\n", restoRacao);

    return 0;
}