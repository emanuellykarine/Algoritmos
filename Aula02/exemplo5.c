#include <stdio.h>

int main(int argc, char **argv) {
   int x = 10;
   int y = 20;
   int m = media(x,y);
   printf("A média de %d e %d é %d\n",x,y,m);
   return 0;
}

int media(int a, int b){
   int soma,media;
   soma = a+b;
   media = soma/2;
   return media;
}