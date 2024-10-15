#include <stdio.h>

int inverter(int a){
    int aInvertido = 0;
    while (a > 0){
        aInvertido = 10 * aInvertido + a % 10;
        a /= 10;
    }

    return aInvertido;
}

int main(){
    int n;
    printf("Digite um numero:");
    scanf("%d", &n);

    printf("O número %d invertido fica %d.\n", n, inverter(n));

    return 0;
}