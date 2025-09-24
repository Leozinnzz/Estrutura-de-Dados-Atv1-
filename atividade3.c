#include <stdio.h> 

int main() {

    float custF, custP;
    int x, y; 

    printf("Informe o custo de producao: "); 
    scanf("%f", &custP);

    printf("Digite o percentual de impostos X: "); 
    scanf("%d", &x); 

    printf("Digite o percentual de impostos Y: ");
    scanf("%d", y); 
    
    printf("percentual x: %d\n", x * (x / 100)); 
    printf("percentual y: %d\n", y * (y / 100)); 

    return 0;
}