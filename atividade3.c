#include <stdio.h> 

int main() {

    float custF, custP;
    int x, y; 

    printf("Informe o custo de producao: "); 
    scanf("%f", &custP);

    printf("Digite o percentual de impostos X: "); 
    scanf("%d", &x); 

    printf("Digite o percentual de impostos Y: ");
    scanf("%d", &y); 
    
    custF = custP + (custP * x/100.0); 
    custF += (custP * (custF * y/100.0));
    
    printf("O custo final sera de: %.2f \n", custF); 
    

    return 0;
}