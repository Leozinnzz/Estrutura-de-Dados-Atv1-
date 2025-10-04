#include <stdio.h>
#include <limits.h>

int main() {

    int n, maior, cont = 0, menor; 

    
    maior = INT_MIN;
    menor = INT_MAX;

    printf("Digite um valor: ");
    scanf("%d", &n); 
    

    //crescente
    printf("Pares Decressentes: \n");
    for(int i=n; i >= 0; i--){
        if(i % 2 == 0) {
            printf("%d\n", i);
            maior = (i > maior) ? i : maior;
        }
    }

    //decressente
    printf("Impares Crescentes: \n");
    for(int j = 0; j <= n; j++) {
        if(j % 2 != 0) {
            printf("%d\n", j);
            menor = j < menor ? j : menor;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
}