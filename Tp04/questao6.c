// estudar
#include <stdio.h>

void ordenaMatriz(int matriz[3][3]) {
    int *p = &matriz[0][0];
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (*(p + i) > *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main() {
    int matriz[3][3] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};
    ordenaMatriz(matriz);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
