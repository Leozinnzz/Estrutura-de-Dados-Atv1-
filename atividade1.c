#include <stdio.h>

int main() {

    int num1, num2; 

    printf("Digite o primeiro numero: "); 
    scanf("%d", &num1); 
    printf("Digite o segundo numero: "); 
    scanf("%d", &num2); 
    
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2); 
    printf("Subtracao: %d - %d = %d\n", num1, num2, num1 - num2); 
    printf("Multiplicacao: %d x %d = %d\n ", num1, num2, num1 * num2 ); 
    printf("Divisao: %d / %d = %.2f\n ", num1, num2, (double) num1 / num2 ); 
    printf("O quadrado da subtracao de (%d - %d) e: %d\n", num1, num2, (num1 - num2) * (num1 - num2)); 

    return 0;
}
