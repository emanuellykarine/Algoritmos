#include <stdio.h>

int main(){
    double saldo = 0;
    double valor;
    int op = 0;

    while (op != 4){
        printf("Saldo atual: %.2f \n", saldo);

        printf("1 - depositar \n2 - sacar \n3 - verificar saldo \n4 - sair \n");

        printf("Digite a opção que deseja executar: ");
        scanf("%d", &op);

        if (op == 1) {
            printf("Digite o valor que quer depositar: ");
            scanf("%lf", &valor);
            saldo = saldo + valor;
            valor = 0;
        } else if (op == 2) {
            printf("Digite o valor que deseja sacar: ");
            scanf("%lf", &valor);
            if (saldo <= 0 || saldo < valor) {
                printf ("\nSaldo insuficiente");
            } else {
                saldo = saldo - valor;
            }
            valor = 0;
        } else if (op == 3){
            printf("\nSeu saldo atual: %.2f", saldo);

        } else {
            printf("\nPrograma encerrado");
            break;
        }

    }
    return 0;

}