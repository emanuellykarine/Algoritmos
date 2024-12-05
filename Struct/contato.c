#include <stdio.h>
#include <stdlib.h>

struct Contato {
    char nome[50];
    char telefone[15];
    char email[50];
    char endereco[100];
};

struct Contato* inserir(char nome[], char telefone[], char email[], char endereco[]){
    struct Contato* contato = (struct Conato*) malloc(sizeof(struct Contato));
    
    strcpy(contato->nome, nome);
    strcpy(contato->telefone, telefone);
    strcpy(contato->email, email);
    strcpy(contato->endereco, endereco);

    return contato;
}

struct Contato* listar(int array){
    return array;
}

int excluir(){

}

int atualizar(){

}

int main() {
    struct Contato* agenda[100];
    struct Contato pessoa;
    int op;
    int cont = 0;
    
    while (op != 10){
        printf("1 - Inserir contato \n2 - Atualizar contato \n3 - Excluir Contato \n4 - Listar contatos\n");
        printf("Digite a opção: ");
        scanf("%d\n", &op);

        if (op == 1){
            printf("Digite o nome do contato %d: ", cont + 1);
            scanf("%s", pessoa.nome);

            printf("Digite o telefone do contato %d: ", cont + 1);
            scanf("%s", pessoa.telefone);

            printf("Digite o email do contato %d: ", cont + 1);
            scanf("%s", pessoa.email);

            printf("Digite o endereço do contato %d: ", cont + 1);
            scanf("%s", pessoa.endereco); 

            agenda[cont] = inserir(pessoa.nome, pessoa.telefone, pessoa.email, pessoa.endereco);
            cont += 1;
        } else if (op == 2){

        } else if (op == 3){
            struct Contato* contatos = listar(agenda);
            for (int i = 0; i < cont; i++){
                printf("Nome: %s\n", contatos[i].nome);
                printf("Telefone: %s\n", contatos[i].telefone);
                printf("Email: %s\n", contatos[i].email);
                printf("Endereço: %s\n", contatos[i].endereco);

            }
            return 0;
        }

    }
}