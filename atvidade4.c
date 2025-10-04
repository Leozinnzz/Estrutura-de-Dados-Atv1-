#include <stdio.h>

int main() { 

    float custF, custP; 
    int x, y; 

    printf("Digte o custo de produto: "); 
    scanf("%f", &custP); 

    printf("Digte o percentual de impostos: ");
    scanf("%d", &x); 

    printf("Digite o percentual do custo pelo distribuidor: ");
    scanf("%d", &y);

    custF =  custP * (1 + x /100.0);
    custF *= (1 + y/100.0); 

    printf("Custo final sera de: %.2f ",  custF); 

    
}