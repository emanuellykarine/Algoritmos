#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
    float z;
};

float areaTriangulo(struct Ponto p1, struct Ponto p2, struct Ponto p3) {
    float a =  sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
    float b =  sqrt((p3.x - p1.x)*(p3.x - p1.x) + (p3.y - p1.y)*(p3.y - p1.y));
    float c =  sqrt((p3.x - p2.x)*(p3.x - p2.x) + (p2.y - p3.y)*(p2.y - p3.y));
    float p = (a+b+c)/2;
    float area = sqrt (p*(p-a)*(p-b)*(p-c));
    return area;
}

int main() {
    struct Ponto p1, p2, p3;
    
    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);

    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);
    
    printf("x3: ");
    scanf("%f", &p3.x);
    printf("y3: ");
    scanf("%f", &p3.y);
    
    printf ("%.2f", areaTriangulo(p1, p2, p3)); 
    
    return 0;
}