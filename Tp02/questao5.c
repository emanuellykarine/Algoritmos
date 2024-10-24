#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int dado1;
  int dado2;
  int soma;
  int op;
  do {
    printf("\nPara lançar os dados digite 1: ");
    scanf("%d", &op);
    if (op == 1){
      soma = 0;
      dado1 = (rand() % (6 - 1 + 1));
      dado2 = (rand() % (6 - 1 + 1));
      soma = dado1 + dado2;
      printf("\nSoma dos dados: %d", soma);
      op =0;
    }
  } while (soma != 7 || soma != 11 && op == 1);
  return 0;
}