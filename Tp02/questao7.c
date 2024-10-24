#include <stdio.h>

int main(){
  double valor;
  int qParcelas;
  double juros;
  double valorTotal;
  double parcelas; 

  printf("Simulador de empréstimos bancários\n");
  printf("Digite o valor desejado do empréstimo: ");
  scanf("%lf", &valor);

  printf("Digite o total de parcelas desejadas para o pagamento: ");
  scanf("%d", &qParcelas);

  juros = (valor * 10.75) / 100;
  valorTotal = valor + juros;
  parcelas = valorTotal / qParcelas;
  printf("\nValor de cada parcela: R$ %.2f", parcelas);
  printf("\nValor total: R$ %.2f\n", valorTotal);
  
}