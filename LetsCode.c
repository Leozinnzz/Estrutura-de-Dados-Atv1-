#include <stdio.h> 
#include <math.h>

int main() {

    float a, b, c, x1, x2, delta; 

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b); 
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao e uma equaçao de segundo grau");
    } 

    delta = b*b - 4*a*c; 

    if (delta < 0) {
        printf("Nao existem raizes reais");
    } else if (delta == 0) {
        x1 = -b / 2*a;
        printf("Raiz unica %.2f\n", x1);  
    } else {
        x1 = (-b + sqrt(delta)) / 2*a;
        x2 = (-b - sqrt(delta)) / 2*a; 
        printf("as duas raizes x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0; 
}