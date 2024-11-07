#include <stdio.h>

char matriz(int linha, int coluna){
      char matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 0){
                matriz[i][j] = '.';
                printf("%c ", matriz[i][j]);
            } 
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 0){
                matriz[i][j] = '.';
            } else if (matriz[i][j] == -1) {
                matriz[i][j] = '*';
            }
        }
    }

    matriz[0][1] = -1;
    matriz[0][2] = -1;
    matriz[1][0] = -1;
    matriz[1][3] = -1;
    matriz[2][3] = -1;
    matriz[2][4] = -1;
    matriz[3][1] = -1;
    matriz[3][4] = -1;
    matriz[4][0] = -1;
    matriz[4][2] = -1;

    

}

int main(){
    int i = 0;
    int j = 0;

    printf("Escolha a posição da matriz: ");
    scanf("%d %d", &i, &j);

    printf("%c", matriz(i, j));
    

    return 0;
}