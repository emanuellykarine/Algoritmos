#include <stdio.h>

// O(n) 
int main(){
    int tam;
    int crescente = 1;
    printf("Tamanho do vetor:");
    scanf("%d", &tam);

    int vetor[tam];
    for (int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
        if (i > 0){
            if ( crescente == 1 && vetor[i] > vetor[i-1]){
                crescente = 1;
            } else {
                crescente = 0;
            }
        }
    }

    if (crescente == 1){
        printf("ORDENADO\n");
    }
    return 0;
}