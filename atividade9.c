#include <stdio.h>

int main() {

    int op; 

    printf("Escolha um numero de 0 a 5: "); 
    scanf("%d", &op);

    switch (op) {
        case 1 : 
            printf("numero 1 escolhido!");
            break;
        case 2 :
            printf("numero 2 escolhido!");
            break;
        case 3 :
            printf("numero 3 escolhido!");
            break;
        case 4 : 
            printf("numero 4 escolhido!");
            break;
        case 5 : 
            printf("numero 5 escolhido!");
            break;
        case 0 : 
            printf("Zero tbm e um numeroo!");
            break;
        default :
            printf("Esse numero nao esta na lista");
    }
}