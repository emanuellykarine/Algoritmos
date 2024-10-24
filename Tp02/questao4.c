#include <stdio.h>

int main(){
    int moedaD;
    char moedaO[3];
    int op;
    double conversao;
    double valor;

    do{
        printf("\n1 - Converter moedas \n2 - Parar conversão");
        printf("\nDigite opcao desejada: ");
        scanf("%d", op);

        printf("Valor que deseja converter: ");
        scanf("%lf", valor);

        printf("Qual a moeda de origem? (ex: BRL, EUR ou USD)");
        scanf("");
       
        // switch (moedaO){
        //     case 'BRL':
        //          printf("Qual a moeda de destino? (ex: EUR ou USD)");
        //          switch (moedaD) {
        //             case 'EUR':
        //                 conversao = valor * 0.16;
        //                 break;
        //             case 'USD':
        //                 conversao = valor * 0.18;
        //          }
        //     case 'EUR':
        //         printf("Qual a moeda de destino? (ex: EUR ou USD)");
        //         case 'EUR':
        //                 conversao = valor * 0.16;
        //                 break;
        //             case 'USD':
        //                 conversao = valor * 0.18;
        //     case 'USD':
        //         break;
        //     }

    }  while (op != 2);
}