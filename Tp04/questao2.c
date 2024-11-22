#include <stdio.h>

void multiplicaMatrizes(int a[2][2], int b[2][2], int resultado[2][2]) {
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            resultado[i][j] = 0;
            for(int k = 0; k < 2; k++){
                resultado[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[2][2] = {
        {3, 5}, 
        {1, 2}
    };

    int matriz2[2][2] = {
        {2, -5},
        {-1, 3}
    };

    int multiplicacao[2][2];

    multiplicaMatrizes(matriz, matriz2, multiplicacao);

    return 0;
}