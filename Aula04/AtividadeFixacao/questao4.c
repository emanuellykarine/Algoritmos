#include <stdio.h>
void swap(int *a, int *b){
    int *guarda;
    guarda = *b;
    *b = *a;
    *a = guarda;
    printf("%d %d\n", a, b);
    printf("%d %d\n", *a, *b);
}

int main(){
    int *p;
    int *q;
    int a = 5, b = 10;
    p = &a;
    q = &b;
    printf("%d %d\n", *p, *q);
    printf("%d %d\n", p, q);
    swap(p, q);
    return 0;
}