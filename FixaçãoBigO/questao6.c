#include <stdio.h>

//O(n)
// 9 + 5n
int main(){
    int v;
    int n;

    printf("Tamanho do arranjo: ");
    scanf("%d", &n);

    printf("Valores do arranjo\n");
    int arranjo[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arranjo[i]);
    }

    printf("Valor que desenha encontrar no arranjo: ");
    scanf("%d", &v);

    for (int i = 0; i < n; i++){
        if (arranjo[i] == v){
            printf("Valor encontra-se no arranjo\n");
            break;
        } else if (i == n - 1){
            printf("Valor não se encontra no arranjo\n");
        }
    }
    return 0;
}