#include <stdio.h> 

int main() {

    float preco, valor; 

    printf("Informe o preco do litro: "); 
    scanf("%f", &preco);
    printf("Informe o valor que deseja abastecer: ");
    scanf("%f", &valor); 

    printf("Quantidade de combustivel dispensada: %.3f\n litros", valor / preco); 

    return 0;
}