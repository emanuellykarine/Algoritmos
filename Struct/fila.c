#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    char atendimento[50];
    char preferencial[50];
};

struct Fila {
    struct Pessoa* pessoaPonteiro = (struct Pessoa*) malloc(sizeof(struct Pessoa));
    struct Pessoa pessoa[100];
};

void inserirPessoaPreferencial(struct Fila* fila){
    printf("Nome: ");
    scanf("%s", fila->pessoaPonteiro->nome);

    printf("Idade: ");
    scanf("%d", fila->pessoaPonteiro->idade);

    printf("Atendimento: ");
    scanf("%s", fila->pessoaPonteiro->atendimento)

    printf("Preferencial: ");
    scanf("%s", fila->pessoaPonteiro->preferencial);

    fila->pessoaPonteiro++;
}

void inserirPessoaNormal(struct Fila* fila){
    printf("Nome: ");
    scanf("%s", fila->pessoaPonteiro->nome);

    printf("Idade: ");
    scanf("%d", fila->pessoaPonteiro->idade);

    printf("Atendimento: ");
    scanf("%s", fila->pessoaPonteiro->atendimento)

    printf("Preferencial: ");
    scanf("%s", fila->pessoaPonteiro->preferencial);

    fila->pessoaPonteiro++;
}

void removerPessoaPreferencial(struct Fila* fila, char* nome){
    
}

int main(){
    struct Fila filaPrefencial;
    filaPrefencial.pessoaPonteiro = filaPrefencial.pessoa;
    
    struct Fila filaNormal;
    filaNormal.pessoaPonteiro = filaNormal.pessoa;
    int op = 0;

    while (op != 100){
        printf("1 - Inserir pessoa preferencial | 2 - Inserir pessoa na fila normal | 3 - Remover uma pessoa da fila preferencial | 4 - Remover uma pessoa da fila normal | 5 - Atender | 6 - Listar filas | 100 - Sair");
        if (op == 1){
            inserirPessoaPreferencial(&filaPrefencial);
        } else if (op == 2){
            inserirPessoaNormal(&filaNormal);
        } else if (op == 3){

        }
    }
}


