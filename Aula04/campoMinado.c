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
    int matriz[5][5] = {
        {0, -1, -1, 0, 0}, //{2, -1, -1, 2, 1}
        {-1, 0, 0, -1, 0}, //{-1, 3, 4, -1, 3}
        {0, 0, 0, -1, -1}, //{2, 2, 3, -1, -1}
        {0, -1, 0, 0, -1}, //{2, -1, 3, 4, -1}
        {-1, 0, -1, 0, 0}  //{-1, 3, -1, 2, 1}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 0) {
                int a = i + 1;
                int b = j + 1;
                int c = i - 1;
                int d = j - 1;

                if (a <= 4){
                    if (matriz[a][j] == -1){
                         matriz[i][j] += 1;
                    } 
                }

                if (b <= 4){
                    if (matriz[i][b] == -1){
                        matriz[i][j] += 1;
                    }  
                }

                if (a <= 4 && b <= 4){
                    if (matriz[a][b] == -1){
                        matriz[i][j] += 1;
                    } 
                }

                if (c >= 0){
                    if(matriz[c][j] == -1){
                        matriz[i][j] += 1;
                    }
                }

                if (d >= 0){
                    if (matriz[i][d] == -1){
                        matriz[i][j] += 1;
                    } 
                }

                if (c >= 0 && d >= 0){
                    if(matriz[c][d] == -1){
                        matriz[i][j] +=1;
                    }
                }

                if (b <= 4 && c >= 0){
                    if (matriz[c][b] == -1){
                        matriz[i][j] += 1;
                    }
                } 

                if (a <= 4 && d >= 0){
                    if (matriz[a][d] == -1){
                        matriz[i][j] += 1;
                    }
                }
        
            }
                
        }
    }
    
    // Print matriz modificada
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}