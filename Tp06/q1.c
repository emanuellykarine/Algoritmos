#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

void atualizaEstoque(struct Produto *p, int qtd) {
    p -> quantidade = qtd;
}

int main() {
    struct Produto p;
    int qtd;
    printf("nome: ");
    scanf("%s", p.nome);
    
    printf("preco: ");
    scanf("%f", &p.preco);
    
    printf("quantidade: ");
    scanf("%d", &qtd);

    p.quantidade = qtd;

    atualizaEstoque(&p, qtd);

    return 0;
}