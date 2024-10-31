#include <stdio.h>

int main(){
    int i;
    printf("Quantos numeros voce deseja digitar: ");
    scanf("%d", &i);

    int num[i];
    printf("Digite os numeros abaixo:\n");
    for (int a = 0; a < i; a++){
        scanf("%d", &num[a]);
    }
    printf("Numeros na ordem inversa\n");
    for (int a = i-1; a >= 0; a-- ){
        printf("%d\n", num[a]);
    }

    return 0;
}