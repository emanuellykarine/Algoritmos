int main(){
    int a = 10, b = 20;
    int *pa, *pb;
    pa = &a; //endereço de memoria
    pb = &b; //sem o * ele retorna o endereço de memoria 
    *pa - *pb * 2;
    printf("%d, %d\n", a, b);
    return 0;
}