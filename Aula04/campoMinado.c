#include <stdio.h>

int main(){
    int matriz[5][5] = {
        {0, -1, -1, 0, 0}, //{2, -1, -1, 2, 1}
        {-1, 0, 0, -1, 0}, //{-1, 3, 4, -1, 3}
        {0, 0, 0, -1, -1}, //{2, 2, 3, -1, -1}
        {0, -1, 0, 0, -1}, //{2, -1, 3, 4, -1}
        {-1, 0, -1, 0, 0}  //{-1, 3, -1, 2, 1}
    };

    int matrizChar[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int linha = 0;
    int coluna = 0;
    int cont = 0;
    printf("CAMPO MINADO (Linha e coluna: 0 a 4)\n");

    while (matriz[linha][coluna] != -1 && cont != 15){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (matrizChar[i][j] == 0){
                    printf(". ");
                } else {
                    printf("%d ", matrizChar[i][j]);
                }
            }
            printf("\n");
        }

        printf("Digite a posição da linha e coluna: ");
        scanf("%d %d", &linha, &coluna);
        cont += 1;
                if (matriz[linha][coluna] == 0){
                    int a = linha + 1;
                    int b = coluna + 1;
                    int c = linha - 1;
                    int d = coluna - 1;

                    if (a <= 4){
                        if (matriz[a][coluna] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (b <= 4){
                        if (matriz[linha][b] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (a <= 4 && b <= 4){
                        if (matriz[a][b] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (c >= 0){
                        if (matriz[c][coluna] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (d >= 0){
                        if (matriz[linha][d] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (c >= 0 && d >= 0){
                        if (matriz[c][d] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (b <= 4 && c >= 0){
                        if (matriz[c][b] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }

                    if (a <= 4 && d >= 0){
                        if (matriz[a][d] == -1){
                            matrizChar[linha][coluna] += 1;
                        }
                    }
                } 
            }

    // Print matriz modificada
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 0){
                    printf(". ");
                } else {
                    printf("* ");
                }
        }
        printf("\n");
    }
    if (cont != 15) {
        printf("Jogo terminado.Você perdeu :(\n");
    } else {
        printf("Você venceu ;)\n");
    }
    

    return 0;
}