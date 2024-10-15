#include <stdio.h>

int main(){
    float nota1, nota2;

    printf("Digite as notas: ");
    scanf("%f %f", &nota1, &nota2);

    float media = ((nota1 * 6) + (nota2 * 4)) / 10;
    printf("A média é: %.1f\n", media);

    return 0;
}