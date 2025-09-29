#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5; 
    int maior, menor;

    printf("Digite 5 notas: \n"); 
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int soma = n1 + n2 + n3 + n4 + n5;
    maior = n1;
    menor = n1; 

    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4; 
    if (n5 > maior) maior = n5; 

    if (n2 < menor) menor = n2; 
    if (n3 < menor) menor = n3;
    if (n4 < menor) menor = n4; 
    if (n5 < menor) menor = n5;

    printf("Media das notas %.2f\n", (float) (soma - maior - menor) / 3);
} 

