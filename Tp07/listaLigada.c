#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Simulador de fila de médico

//variaveis globais
int preferencial = 0;
int normal = 0;

// struct paciente
struct Paciente{
    char nome[100];
    int tipo; // 0 normal - 1 preferencial
};

// struct nó
struct Node{
    struct Node *proximo; // ponteiro para o próximo valor
    struct Paciente paciente;
};

// struct medico
struct Medico{
    char nome[100];
    int total_pacientes; // maximo 15
    struct Node *inicio_da_fila;
};

// criar médico
struct Medico *criar_medico(char nome[], int total_pacientes, struct Node *inicio_da_fila){
    struct Medico *medico = (struct Medico *)malloc(sizeof(struct Medico));
    strcpy(medico->nome, nome);
    medico->total_pacientes = total_pacientes;
    medico->inicio_da_fila = inicio_da_fila;

    return medico;
}

// criar paciente
struct Paciente *criar_paciente(char nome[], int tipo){
    struct Paciente *paciente = (struct Paciente *)malloc(sizeof(struct Paciente));
    strcpy(paciente->nome, nome);
    paciente->tipo = tipo;

    return paciente;
}

// adicionar paciente no final da fila do médico
void adicionar_paciente(struct Medico *medico, struct Paciente paciente){
    struct Node *novo_paciente = (struct Node *)malloc(sizeof(struct Node)); // cria o nó do novo paciente
    novo_paciente->paciente = paciente;                                      // novo paciente recebe paciente
    novo_paciente->proximo = NULL;                                           // proximo recebe null

    if (medico->inicio_da_fila == NULL)
    {                                           // se a fila do medico estiver vazia
        medico->inicio_da_fila = novo_paciente; // insere o novo paciente no inicio da fila
    }
    else
    {
        struct Node *atual = medico->inicio_da_fila; // se não estiver vazia, o valor atual recebe o inicio da fila do médico
        while (atual->proximo != NULL)
        {                           // enquanto o proximo do atual for dirente de null, ou seja, enquanto nao chegar no final do nó
            atual = atual->proximo; // então atual recebe proximo do atual
        }
        atual->proximo = novo_paciente; // quando chegar no final do nó, o proximo do atual será o novo paciente
        {};
    }
}

// remover paciente
void remover_paciente(struct Medico *medico, struct Paciente paciente){ // recebe o medico e o paciente que deseja remover
    struct Node *atual = medico->inicio_da_fila; // atual recebe inicio da fila
    struct Node *anterior = NULL;

    while (atual != NULL) { // enquanto nao chegar no final da fila
        if (strcmp(atual->paciente.nome, paciente.nome) == 0)
        { // se nome do paciente atual for igual nome do paciente que quer remover
            printf("Paciente %s atendido(a)\n", atual->paciente.nome);
            if (anterior == NULL)
            { // se o anterior for null é pq esse é o primeiro valor da lista
                remover_inicio(medico);
                medico->total_pacientes = medico->total_pacientes - 1;
            }
            else {
                anterior->proximo = atual->proximo; // proximo do anterior recebe proximo do atual
                free(atual);                        // apaga o atual
                medico->total_pacientes = medico->total_pacientes - 1;
            }
            return;
        }
        anterior = atual;       // anterior recebe o atual
        atual = atual->proximo; // atual recebe o proximo
    }
}

//remover paciente do inicio da fila
void remover_inicio(struct Medico *medico){
    struct Node *atual = medico->inicio_da_fila;
    medico->inicio_da_fila = medico->inicio_da_fila->proximo;
    free(atual);
}

// imprimir fila de pacientes
void imprimir_fila(struct Medico *medico){
    struct Node *atual = medico->inicio_da_fila;
    if (atual == NULL){
        printf("Fila vazia\n");
    }
    else{
        while (atual != NULL){
            printf("Paciente: %s | Tipo: %s\n", atual->paciente.nome, atual->paciente.tipo == 0 ? "Normal" : "Preferencial"); // operador ternário
            atual = atual->proximo;
        }
    }
}

//contagem preferencias
int contagem_preferenciais(struct Medico *medico){
    int qtd_preferenciais = 0;
    struct Node *atual = medico->inicio_da_fila;
    while (atual != NULL){
        if (atual->paciente.tipo == 1){
            qtd_preferenciais++;
        }
        atual = atual->proximo; // vai pro proximo paciente
    }

    return qtd_preferenciais;
}

// atender pacientes
void atender_paciente(struct Medico *medico, int qtd_preferenciais, int *preferencial, int *normal){
    struct Node *atual = medico->inicio_da_fila;
    while (atual != NULL){
        if (*preferencial < 2 && atual->paciente.tipo == 1){ // se não tiver atendido 2 preferenciais e o paciente for preferencial
            remover_paciente(medico, atual->paciente); // atende o preferencial
            (*preferencial)++;                            // soma ao contador
            qtd_preferenciais--; //quantidade total de preferenciais
        }
        else if (*preferencial == 2 && atual->paciente.tipo == 0){ // se tiver atendido dois preferenciais e o atual for normal
            remover_paciente(medico, atual->paciente); // atende o normal
            (*normal)++;                                  // soma ao contador
            (*preferencial) = 0;                          // zera o preferencial
        }
        else if (*normal == 1 && atual->paciente.tipo == 1){ // se ja tiver atendido um normal e o atual for preferencial
            remover_paciente(medico, atual->paciente); // atende o preferencial
            (*preferencial)++;                            // soma ao contador
            (*normal) = 0;                                // zera o normal
            qtd_preferenciais--; //quantidade total de preferenciais
        } else if (qtd_preferenciais == 0 && atual->paciente.tipo == 0){
            remover_paciente(medico, atual->paciente); // atende o normal
            (*normal)++;                                  // soma ao contador
        }
        atual = atual->proximo; // vai pro proximo paciente
    }
}

void menu_principal(){
    printf("1. Adicionar paciente\n");
    printf("2. Atender paciente\n");
    printf("3. Ver fila de atendimento\n");
    printf("4. Selecionar outro médico\n");
    printf("5. Sair\n");
}

void menu_medico(){
    printf("1.Emanuelly Karine\n");
    printf("2.João Victor\n");
    printf("3.Ewerton Kauã\n");
}

int main(){
    int opcao;
    int opcao_medico;
    struct Medico *medico = NULL;
    char nome[100];
    int tipo;
    struct Medico *medico1 = criar_medico("Emanuelly", 0, NULL); // maximo de paciente é 15
    struct Medico *medico2 = criar_medico("Victor", 0, NULL);
    struct Medico *medico3 = criar_medico("Kaua", 0, NULL);

    while (opcao != 5){
        while (opcao_medico != 1 || opcao_medico != 2 || opcao_medico != 3){
            printf("----------Médico------------\n");
            menu_medico();
            printf("Selecione o médico desejado. (ex: 1):");
            scanf("%d", &opcao_medico);
            if (opcao_medico == 1)
            {
                medico = medico1;
                break;
            }
            else if (opcao_medico == 2)
            {
                medico = medico2;
                break;
            }
            else if (opcao_medico == 3)
            {
                medico = medico3;
                break;
            }
            else
            {
                printf("Opção inválida\n");
            }
        }

        while (opcao != 4 || opcao != 5) {
            printf("--------------Fila de atendimento %s--------\n", medico->nome);
            menu_principal();
            printf("Digite a opção:");
            scanf("%d", &opcao);

            if (opcao == 1){ // adicionar paciente
                if (medico->total_pacientes == 15){
                    printf("Fila de atendimento cheia, não é possível adicionar pacientes\n");
                }
                else{
                    printf("------------Adicionar pacientes---------\n");
                    printf("Digite o nome do paciente:");
                    scanf(" %[^\n]", nome);
                    printf("Digite o tipo de atendimento (0 - Normal | 1 - Preferencial): ");
                    scanf("%d", &tipo);
                    struct Paciente *paciente = criar_paciente(nome, tipo);
                    medico->total_pacientes = medico->total_pacientes + 1; // adiciona 1 ao total de pacientes
                    adicionar_paciente(medico, *paciente);

                    printf("Paciente adicionado\n");
                }
            }

            else if (opcao == 2) { // atender paciente
                printf("------------Atendimento---------\n");
                if (medico->total_pacientes == 0){
                    printf("Não tem pacientes cadastrados\n");
                } else {
                    atender_paciente(medico, contagem_preferenciais(medico), &preferencial, &normal);
                }
                
            }

            else if (opcao == 3){ // imprimir fila
                printf("------------Pacientes na fila---------\n");
                imprimir_fila(medico);

            } else if (opcao == 4 || opcao == 5){
                break;
            }
        }
    }
    return 0;
}