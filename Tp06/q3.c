#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int comparaDatas(struct Data d1, struct Data d2) {
    if (d1.ano < d2.ano || d1.ano == d2.ano && d2.dia > d1.dia && d2.mes >= d1.mes || d2.dia == d1.dia && d2.mes > d1.mes && d2.ano >= d1.ano){
        return 1;
    } else if (d1.ano == d2.ano && d1.dia == d2.dia && d1.mes == d2.mes){
        return 0;
    }else if (d1.ano > d2.ano || d1.ano == d2.ano && d1.dia > d2.dia && d1.mes >= d2.mes || d1.dia == d2.dia && d1.mes > d2.mes && d1.ano >= d2.ano){
        return -1;
    }
}

int main() {
    struct Data d1, d2;
    printf("data 1:\n");
    printf("dia: ");
    scanf("%d", &d1.dia);
    
    printf("mes: ");
    scanf("%d", &d1.mes);
    
    printf("ano: ");
    scanf("%d", &d1.ano);

    printf("data 2:\n");
    printf("dia: ");
    scanf("%d", &d2.dia);
    
    printf("mes: ");
    scanf("%d", &d2.mes);
    
    printf("ano: ");
    scanf("%d", &d2.ano);
    
    printf("%d", comparaDatas(d1, d2));
    return 0;
}