#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, maior, cont = 0, menor; 
    int sum = 0;

    

    printf("Digite 10 numeros \n"); 
    for (int i=0; i<10; i++) {
        scanf("%d", &n);
        sum += n;
        
        if(!i)
            maior = menor = n;
        
        maior = (n > maior) ? n : maior;
        menor = (n < menor) ? n : menor;
        
        cont += 1;

    }

    float media = sum / cont; 

    printf("Maior valor lido: %d \n", maior);
    printf("Menor valor lido %d \n", menor); 
    printf("Media dos valores: %.2f ", media);
    
}