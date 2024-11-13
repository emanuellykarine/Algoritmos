int  main(){
    int a = 10, b = 20, c = 30;
    int *ponteiro;
    ponteiro = &b; //endereço vai ser o mesmo que o endereço de b
    *ponteiro = -5; // variavel vai receber -5, os que possuem mesmo endereço 
    ponteiro = &c; //endereço vai ser o mesmo que o endereço de c
    *ponteiro = 50; // variavel vai receber 50, os locais que estao no mesmo endereço
    ponteiro = &a; //ponteiro recebe endereço de a, compartilham mesmo valor

    printf("a=%d,b=%d,c=%d,*p=%d\n",a, b, c, *ponteiro);
    return 0;

}