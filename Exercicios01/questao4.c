#include <stdio.h>

int main(){
    float a, b, c, d;
    
    printf("Digite suas quatro notas com casas decimais:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    float media = (a + b + c + d) / 4;
    printf("A sua média é: %.2f\n", media);
    return 0;
}