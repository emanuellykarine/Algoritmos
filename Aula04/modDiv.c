#include <stdio.h>

int mod(int a, int b){
    b = b + b;
    if (b >= a){
        return a;
    } else {
        return mod(a, b);
    }
}

int main(){
    printf("%d\n", mod(25, 4));
}