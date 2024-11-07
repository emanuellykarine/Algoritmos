#include <stdio.h>


int main(){
    int matriz[5][5] = {
        {0, -1, -1, 0, 0},
        {-1, 0, 0, -1, 0},
        {0, 0, 0, -1, -1},
        {0, -1, 0, 0, -1},
        {-1, 0, -1, 0, 0}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 0) {
                int a = i + 1;
                int b = j + 1;
                if (a <= 4 && b <= 4){
                    if (matriz[i][b] == -1){
                        matriz[i][j] += 1;
                    } 
                }

                if (a <= 4 && b <= 4){
                    if (matriz[a][b] == -1){
                        matriz[i][j] += 1;
                    } 
                }

                if (a <= 4 && b <= 4){
                    if (matriz[a][j] == -1){
                        matriz[i][j] += 1;
                    } 
                }

                int c = i - 1;
                int d = j - 1;
                if (a >= 0 && b >= 0){
                    if (matriz[c][d] == -1){
                        matriz[i][j] += 1;
                    } 
                }

        
            }
                
        }
    }
    
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}