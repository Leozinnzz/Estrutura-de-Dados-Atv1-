#include <stdio.h> 

int main() {

    int num1, num2, num3;
    int troca;

    printf("Digite 3 valores: \n");
    scanf("%d", &num1); 
    scanf("%d", &num2);
    scanf("%d", &num3); 

    
    if (num1 > num2) { troca = num1; num1 = num2; num2 = troca;} 
    if (num2 > num3) { troca = num2; num2 = num3; num3 = troca;}
    if (num1 > num2) { troca = num1; num1 = num2; num2 = troca;} 

    printf("Ordem crescente: %d %d %d\n", num1, num2, num3);
    printf("Ordem decrescente: %d %d %d\n", num3,  num2, num1);
    
}