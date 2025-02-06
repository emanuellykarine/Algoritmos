#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* proximo;
    struct Node* anterior;
}

struct Node* inicio_da_lista = NULL:

void criar_lista(){
    inicio_da_lista = NULL;
}