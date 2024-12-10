#include <stdio.h>
#include <stdlib.h>

struct Contato {
    char nome[50];
    char telefone[15];
    char email[50];
    char endereco[100];
};

void inserir(struct Contato agenda[], int cont){
    printf("Digite o nome do contato %d: ", cont + 1);
    scanf("%s", agenda[cont].nome);

    scanf("%*c");

    printf("Digite o telefone do contato %d: ", cont + 1);
    scanf("%s", agenda[cont].telefone);

    scanf("%*c");

    printf("Digite o email do contato %d: ", cont + 1);
    scanf("%s", agenda[cont].email);

    scanf("%*c");
    printf("Digite o endereço do contato %d: ", cont + 1);
    scanf("%s", agenda[cont].endereco); 

    scanf("%*c");
}

void listar(struct Contato agenda[], int cont){
    printf("Lista de contatos:\n");
    for (int i = 0; i < cont; i++){
        printf("Contato %d\n", i + 1);
        printf("Nome: %s  ", agenda[i].nome);
        printf("Telefone: %s  ", agenda[i].telefone);
        printf("Email: %s  ", agenda[i].email);
        printf("Endereço: %s\n", agenda[i].endereco);
    }
}


void excluir(struct Contato agenda[], int opContato){
    int opcao = opContato - 1;
    for (int i = opcao;i < sizeof(agenda) - 1; ++i){ 
        agenda[i] = agenda[i + 1];
    }
}


int atualizar(struct Contato agenda[], int opContato){
    int opcao = opContato - 1;
    struct Contato* contato = &agenda[opcao];
        
    printf("Digite o nome do contato: ");
    scanf("%s", agenda[opcao].nome);

    scanf("%*c");

    printf("Digite o telefone do contato: ");
    scanf("%s", agenda[opcao].telefone);

    scanf("%*c");

    printf("Digite o email do contato: ");
    scanf("%s", agenda[opcao].email);

    scanf("%*c");

    printf("Digite o endereço do contato: ");
    scanf("%s", agenda[opcao].endereco); 

    scanf("%*c");
}  


int main() {
    int op = 0;
    int cont = 0;
    int opContato = 0;
    int capacidade = 10;
    struct Contato agenda[capacidade];
    while (op != 10){
        printf("------------------------------\n");
        printf("1 - Inserir contato \n2 - Atualizar contato \n3 - Excluir Contato \n4 - Listar contatos \n10 - Finalizar lista\n");
        printf("------------------------------\n");
        printf("Digite a opção: ");
        scanf("%d", &op);

        if (op == 1 && cont < sizeof(agenda)){
            if (capacidade == cont){
                struct Contato novaAgenda[capacidade * 2];
                capacidade = capacidade * 2;
                for (int i = 0; i < capacidade / 2; i++){
                    novaAgenda[i] = agenda[i];
                }

                agenda = novaAgenda;
            }
            printf("Inserir Contato\n");
            inserir(agenda, cont);
            cont += 1;
        } else if (op == 2){
            printf("Atualizar Contato\n");
            listar(agenda, cont);

            printf("Qual contato você deseja atualizar as informações?");
            scanf("%d", &opContato);

            atualizar(agenda, opContato);
            printf("Contato atualizado.\n");

        } else if (op == 3){
            printf("Excluir Contato\n");
            listar(agenda, cont);

            printf("Qual contato você deseja excluir?");
            scanf("%d", &opContato);
            
            cont-=1;
            
            excluir(agenda, opContato);
            printf("Contato excluído.\n");

        } else if (op == 4){
            listar(agenda, cont);

        } else if (op == 10){
            printf("Fim.\n");
        }  
    }
    return 0;
}