#include <stdio.h>
int multiplicacao(int a, int b){
    int m = a*b;
    return m;
}

int main(){
    int a, b;
    scanf ("%d %d", &a, &b);
    printf("%d\n", multiplicacao(a, b));
    return 0;
}