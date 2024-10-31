#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, cont = 0;
    int ocorrencias[n];
    int ld1=0, ld2=0, ld3=0, ld4=0, ld5=0, ld6=0, ld7=0;
    printf("Digite quantas vezes você quer lançar o dado: ");
    scanf("%d", &n);

    printf("Lançamentos: ");
    while (cont < n){
        ocorrencias[cont] = (rand() % (6 - 1 + 1));
        printf("%d ", ocorrencias[cont]);
        if (ocorrencias[cont] == 1){
            ld1++;
        } else if (ocorrencias[cont] == 2){
            ld2++;
        } else if (ocorrencias[cont] == 3) {
            ld3++;
        } else if (ocorrencias[cont] == 4) {
            ld4++;
        } else if (ocorrencias[cont] == 5) {
            ld5++;
        } else if (ocorrencias[cont] == 6) {
            ld6++;
        } else {
            ld7++;
        }

        cont++;
    }
        printf("\nOcorrencias\n");
        printf("Lado 1: %d\n", ld1);
        printf("Lado 2: %d\n", ld2);
        printf("Lado 3: %d\n", ld3);
        printf("Lado 4: %d\n", ld4);
        printf("Lado 5: %d\n", ld5);
        printf("Lado 6: %d\n", ld6);
        printf("Lado 7: %d\n", ld7);

    return 0;
}