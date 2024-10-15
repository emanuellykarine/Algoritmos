#include <stdio.h>

int main(){
    float salario, vendas;

    printf("Digite o valor do salario: R$ ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: R$ ");
    scanf("%f", &vendas);

    float comissao = (4 * vendas) / 100;
    float novoSalario = salario + comissao;

    printf ("Valor da comissão: R$ %.2f\n", comissao);
    printf ("Valor do Salário final: R$ %2.f\n", novoSalario);

    return 0;
}