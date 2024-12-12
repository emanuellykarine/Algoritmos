#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float notas[3];
    };

float mediaNotas(struct Aluno *a) {
    return (a->notas[0] + a->notas[1] + a->notas[2]) / 3;
}
  
void inserir (struct Aluno listaMedias [], int cont){
    printf("Digite o nome do aluno %d: ", cont + 1);
    scanf("%s", listaMedias[cont].nome);
    
    printf("Digite a matricula do aluno %d: ", cont + 1);
    scanf("%d", &listaMedias[cont].matricula);

    printf("Digite as 3 notas do aluno %d: ", cont + 1);
    scanf("%f %f %f", &listaMedias[cont].notas[0], &listaMedias[cont].notas[1], &listaMedias[cont].notas[2]);
}
void listar (struct Aluno listaMedias[], int cont){
    printf("Alunos:\n");
        for (int i = 0; i < cont; i++) {
            printf("Nome do aluno %d: %s\n", i+1,  listaMedias[i].nome);}
}
void checarMedia (struct Aluno listaMedias[], int opAluno){
    int opcao =  opAluno -1;
    struct Aluno *aluno = &listaMedias[opcao];
    printf("Media do aluno selecionado:\n");
    printf("%s\n", listaMedias[opcao].nome);
    float media = mediaNotas(aluno);
    printf("%.2f\n", media);
}
    
int main() {
    struct Aluno listaMedias[100];
    
    int op = 0;
    int cont = 0;
    int opAluno = 0;
    
    while (op != 3){
        printf ("digite a opção desejada:\n 1 - Inserir aluno e notas\n 2- Checar a média do aluno\n 3-sair\n");
        scanf("%d", &op);
        
        if (op == 1){
            inserir(listaMedias, cont);
            cont += 1;
        }
        else if (op == 2){
            printf ("De qual aluno você deseja checar a média?\n");
            listar(listaMedias, cont);
            scanf ("%d", &opAluno);
            checarMedia (listaMedias, opAluno);
        }
    }
    return 0;
}