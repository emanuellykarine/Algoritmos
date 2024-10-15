#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;
    printf("Digite as coordenadas dos ponto A e B: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float x = c - a;
    float y = d - b;
    x = pow(x, 2); //quadrado do numero
    y = pow(y, 2);

    float distancia = sqrt(x+y); //raiz quadrada
    printf("%.2f\n", distancia);

    return 0;
}