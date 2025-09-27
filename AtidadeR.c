#include <stdio.h> 
#include <limits.h>

int main() {
    
    int n, m;
    int maior, menor;
    int soma = 0;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Digite os numeros: ");
        scanf("%d", &m); 
        if (m > 0 ){
            maior = INT_MIN; 
            menor = INT_MAX;
            
            if (m > maior) 
                maior = m;
            
            if (m < menor) 
                menor = m;
            
            soma += m;
        }
    }

    printf("Soma dos numeros digitados:  %d\n", soma);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", (float) soma / n); 

    return 0;
}