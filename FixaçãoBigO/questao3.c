#include <stdio.h>

// O(n)
int main(){
    int tamanho;
    int valor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor a ser inserido no vetor: ");
    scanf("%d", &valor);

    if (vetor[tamanho - 1] <= valor){
        vetor[tamanho] = valor;
    } else if (valor <= vetor[0]){
        for (int j = tamanho + 1; j > 0; j--){
            vetor[j] = vetor[j-1];
        }   
        vetor[0] = valor; 
    } else {
        for (int i = 0; i < tamanho - 1; i++){
            if (valor >= vetor[i] && valor <= vetor[i+1]) {
                for (int j = tamanho + 1; j > i + 1; j--){
                    vetor[j] = vetor[j-1];
                } 
                vetor[i+1] = valor;
                break;
            }
        }
    }

    for (int i = 0; i <= tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}