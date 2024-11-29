#include <stdio.h>

int main(){
    int i , j , k , s ;
    int N = 50;
    for ( i = 0; i < N - 1; i++){
        for ( j= i +1; j < N; j++){
            for ( k=1; k < j ; k++){
                s += 1 ;
            }
        } //O(n)
    } //O(n)

    printf ("%d\n", s);
}

// se N = 1000 i < 999 j < 1000
//se i = 998 j = 999 k < 999
// se i = 5 j = 6 < 1000 k < 6 
//o(n2)
// se N = 3 .....
// i < 2
//j < 3