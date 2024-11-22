#include <stdio.h>

float mediaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i ++){
        soma = soma + arr[i];
    }
    
    float resultado = soma / tamanho;
    
    return resultado;
}

int main() {
    int tam;
    printf("Tamanho do array: ");
    scanf("%d", &tam);

    int array[tam];
    for (int i = 0; i < tam; i++){
        scanf("%d", &array[i]);
    }

    float media = mediaArray(array, tam);
    printf("%.2f\n", media);
    
    return 0;
}