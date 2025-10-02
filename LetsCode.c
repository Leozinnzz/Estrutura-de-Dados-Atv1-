#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int x, n, y; 

    printf("Digite a quantidade de numeros: "); 
    scanf("%d", &x); 
    
    printf("Digite um numero Y: "); 
    scanf("%d", &y); 

    srand(time(NULL));
    for (int i = 0; i < x; i++) {
        n = rand() % y; 
        printf("%d\n", n);
    }




}
