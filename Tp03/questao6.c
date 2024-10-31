#include <stdio.h>

int main(){
    int n=0, k=0;
    int alunos[n];
    int provas[k];
    int pesos[k];
    int contAlunos = 0, contProvas=0;
    int peso, nota;
    int mult =0, somaPesos=0;

    printf("Quantos alunos na classe: ");
    scanf("%d", &n);
    printf("Quantas provas os alunos fizeram: ");
    scanf("%d", &k);

    while (contProvas < k){
        printf("Peso da prova %d: ", contProvas);
        scanf("%d", &peso);
        pesos[k] = peso;
    }

    while (contProvas < k){
        printf("Prova 1 %d\n", contProvas+1);
        while(contAlunos < n){
            printf("Nota do aluno %d:  ", contAlunos+1);
            scanf("%d", &nota);
            int somaProva = nota + somaProva;
            contAlunos++;
        }
            contAlunos=0;
            contProvas++;
    }

    return 0;
}