#include <stdio.h>

int main(){
    char gabarito[10];
    int nAlunos = 0;
    char alunoGabarito[10];
    int acertos = 0;
    int cont = 0;
    int i, a, x;

    printf("Digite o gabarito oficial:\n");
    for (i = 0; i < 10; i++){
        scanf(" %c", &gabarito[i]);
    }

    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &nAlunos);

    while (cont < nAlunos){
        printf("Digite o gabarito do aluno %d\n", cont+1);
        for (a = 0; a < 10; a++){
            scanf(" %c", &alunoGabarito[a]);
        }

        for (x = 0; x < 10; x++){
            if (gabarito[x] == alunoGabarito[x]){
                acertos++;
            }
        }

        printf("O aluno %d acertou %d questões\n", cont+1, acertos);
        cont++;
        acertos = 0;
    }

    return 0;
}