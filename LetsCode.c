#include <stdio.h> 

int main () {

    int dia, mes, prox, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia); 
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano); 

    prox = dia += 1;

    if (dia > 31) {
        dia = 1;
        mes += 1;
    }
    if (mes > 12) {
        mes = 1; 
        dia = 1;
        ano += 1; 
    }

    printf("%d/%d/%d \n", dia, mes, ano); 
    return 0;
    
}