#include <stdio.h>

int main(){
    int n;
    double sequencia[n];

    printf("Digite n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%lf", &sequencia[i]);
    }
    
    for (int a = 0; a < n; a++) {
        int cont = 1;
        double num = sequencia[a];
        for (int b = a + 1; b < n; b++){
            if (sequencia[b] == num) {
                cont ++;
            }
        }

        int repetiu = 0;
        for (int j = 0; j < a; j++){
            if (sequencia[j] == sequencia[a]){
                repetiu = 1;
                break;
            }
        }

        if (repetiu == 0){
            printf("%.1f ocorre %d vezes\n", sequencia[a], cont);
        }
       
    }
    return 0;
}