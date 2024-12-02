#include <stdio.h>

//8 + 5n
int main(){
    int n;

    printf("Tamanho do arranjo: ");
    scanf("%d", &n);

    int arranjo[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arranjo[i]);
    }

    int menor = arranjo[0];

    for(int i = 1; i < n; i++){
        if (arranjo[i] < menor){
            menor = arranjo[i];
        }
    }

    printf("Menor valor: %d\n", menor);
    return 0;
}