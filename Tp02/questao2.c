#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero = 0;
  srand(time(NULL));
  int random = (rand() % (100 - 0 + 1));

  while (numero != random) {

    printf("Digite o numero que você acha que é o randomico: \n");
    scanf("%d", &numero);
    if (numero < random) {
      printf("O numero digitado é menor que que o esperado\n");
    } else if (numero > random) {
      printf("O numero digitado é maior que o esperado \n");
    }
  }
  printf("Você venceu");
}