int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    int operacao = *p - *q;
    printf("%d\n", operacao);
    return 0;
}