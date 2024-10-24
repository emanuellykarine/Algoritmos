#include <stdio.h>
#include <string.h>

int main(){
    char moedaD[4], moedaO[4];
    int opOrigem, opDestino;
    int op = 0;
    double conversao;
    double valor;

    while (op != 2){
        printf("\n1 - Converter moedas \n2 - Parar conversão");
        printf("\nDigite opcao desejada: ");
        scanf("%d", &op);

        if (op == 1){
            printf("Valor que deseja converter: ");
            scanf("%lf", &valor);
    
            printf("\n1 - BRL \n2 - EUR \n3 - USD");
            printf("\nDigite o numero correspondente a moeda de origem: ");        
            scanf("%d", &opOrigem);
    
            switch (opOrigem){
                case 1:
                    strcpy(moedaO, "BRL");
                    break;
                case 2:
                    strcpy(moedaO, "EUR");
                    break;
                case 3:
                    strcpy(moedaO, "USD");
                    break;
            }
    
            printf("\n1 - BRL \n2 - EUR \n3 - USD");
            printf("\nDigite o numero correspondente a moeda de destino: ");        
            scanf("%d", &opDestino);
    
            switch (opDestino){
                case 1:
                    strcpy(moedaD, "BRL");
                    break;
                case 2:
                    strcpy(moedaD, "EUR");
                    break;
                case 3:
                    strcpy(moedaD, "USD");
                    break;
            }
            printf("%s\n", moedaD);
            printf("%s\n", moedaO);
    
            if (strcmp(moedaO, moedaD) == 0) {
                printf("A moeda é a mesma.");
            } else if (strcmp(moedaO, "BRL") == 0 && strcmp(moedaD, "EUR") == 0) {
                conversao = valor * 0.16;
                printf("\nA moeda convertida ficou € %.2f", conversao);
            } else if (strcmp(moedaO, "BRL") == 0 && strcmp(moedaD, "USD") == 0){
                conversao = valor * 0.18;
                printf("\nA moeda convertida ficou $ %.2f", conversao);
            } else if (strcmp(moedaO, "EUR") == 0 && strcmp(moedaD, "BRL") == 0) {
                conversao = valor * 6.16;
                printf("\nA moeda convertida ficou R$ %.2f", conversao);
            } else if (strcmp(moedaO, "EUR") == 0 && strcmp(moedaD, "USD") == 0) {
                conversao = valor * 1.08;
                printf("\nA moeda convertida ficou $ %.2f", conversao);
            } else if (strcmp(moedaO, "USD") == 0 && strcmp(moedaD, "BRL") == 0) {
                conversao = valor * 5.69;
                printf("\nA moeda convertida ficou R$ %.2f", conversao);
            } else {
                conversao = valor * 0.92;
                printf("\nA moeda convertida ficou € %.2f", conversao);
            }
        }
    }  
}
