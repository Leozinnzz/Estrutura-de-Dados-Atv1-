#include <stdio.h>

int main() {

    int x, y;


    printf("Digite dois valores: \n"); 
    scanf("%d %d", &x, &y);

    printf("Divisão de %d por %d e igual a %.2f", x, y, (float) x / y); 

    return 0; 

}