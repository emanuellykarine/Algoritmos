#include <stdio.h>

void transporMatriz(int matriz[3][3], int transposta[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[3][3] = {
        {2, 5, 8},
        {4, 7, 10}, 
        {3, 9, 1}
    };

    int matrizTransposta[3][3];

    transporMatriz(matriz, matrizTransposta);
    
    return 0;
}