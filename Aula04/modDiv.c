#include <stdio.h>

int mod(int a, int b){
    if (b > a){
        return a;
    } else {
        return mod(a-b, b);
    }
}

int div(int a, int b){
    if (b > a){
        return 0;
    } else {
        return 1 + div(a-b, b);
    }
}

int main(){
    int resultadoResto = mod(26, 5);
    int resultadoQuo = div(26, 5);
    printf("Resto: %d\n", resultadoResto);
    printf("Quociente: %d\n", resultadoQuo);
    return 0;
}