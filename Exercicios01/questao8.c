#include <stdio.h>

int main (){
    float salario, aumento;

    printf("Digite o seu salário e o percentual de aumental em decimal: ");
    scanf("%f %f", &salario, &aumento);

    float novoSalario = (salario * aumento) + salario;
    float valorAumento = novoSalario - salario;

    printf("O novo salário é R$ %.2f e o aumento foi de R$ %.2f\n", novoSalario, valorAumento);
    return 0;
}