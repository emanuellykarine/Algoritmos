#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    char atendimento[50];
    char preferencial[50];
};

struct FilaPreferencial {
    struct Pessoa* pessoaPonteiro = (struct Pessoa*) malloc(sizeof(struct Pessoa));
    struct Pessoa pessoa;
};

struct FilaNormal{
    struct Pessoa* pessoaPonteiro = (struct Pessoa*) malloc(sizeof(struct Pessoa));
    struct Pessoa pessoa;
};


int main(){
    int op = 0;

    while (op != 100){
        printf("1 - Inserir pessoa | 2 - Remover pessoa | 3 - Atender | 4 - Listar | 100 - Sair");
        if (op == 1){
            
    
            inserirPessoa();
        }
    }
}


