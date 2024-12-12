#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float distancia(struct Ponto p1, struct Ponto p2) {
    float dist =  sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
    return dist;
}

int main() {
    struct Ponto p1, p2;
    
    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);

    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    printf("%f", distancia(p1, p2));
    return 0;
}