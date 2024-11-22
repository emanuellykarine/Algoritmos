#include <stdio.h>

void inverteArray(int arr[], int tam){
    int *arrPonteiro[tam];
    int *guarda;
    arrPonteiro[tam] = &arr[tam];

    for (int i = 0; i < tam / 2; i++){
        guarda = arr[tam - 1 - i];
        arr[tam - 1 - i] = arr[i];
        arr[i] = guarda; 
    }

    for (int i = 0; i < tam; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int tamanho;
    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &array[i]);
    }

    inverteArray(array, tamanho);
    
    return 0;

}