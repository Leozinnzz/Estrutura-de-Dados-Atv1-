#include <stdio.h>

int main() { 

    char x;
    int y;

    printf("Digte uma letra :");
    scanf("%c", &x);

    printf("Digite um numero: ");
    scanf("%d", &y);

    printf("Resultado de %c x %d = %d ", x, y, (x - '0') * y); 

    return 0;
}