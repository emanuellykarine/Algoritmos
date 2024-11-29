#include <stdio.h>

int main() {
    int a = 10;
    int *ponteiro = &a;
    int valor = *ponteiro;
    // com * - valor; sem * - endereço de memoria 
    // ponteiro armazena o endereço de memoria de outra variavel
    //se modifica o endereço, modifica o valor 

    printf("Valor: %d\n", valor);

    return 0;
}