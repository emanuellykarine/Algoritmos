#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    float delta;

    printf("Digite as constantes da função quadratica ou seja a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b*b) - (4 * a * c);
    if (delta > 0){
        printf("A equação tem duas raízes reais e distintas.");
    } else if (delta < 0) {
        printf("A função não tem raízes.");
    } else {
        printf("A função tem duas raizes reais e iguais.");
    }
    
    return 0;
}