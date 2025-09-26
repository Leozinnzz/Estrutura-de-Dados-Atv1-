#include <stdio.h>

int main() {

    int op; 

    printf("Escolha um numero de 1 ate 5: \n"); 
    scanf("%d", &op);
    switch (op) {
        case 1: 
            printf("Voce escolheu o numero 1!\n");
            break;
        case 2: 
            printf("Voce escolheu o numero 2!\n");
            break;
        case 3: 
            printf("Voce escolheu o numero 3!\n"); 
            break;
        case 4: 
            printf("Voce escolheu o numero 4!\n");
            break;
        case 5: 
            printf("Voce escolheu o numero 5!\n"); 
            break;
        case 0: 
            printf("Programa encerrado: \n");
            return 0;
        default : 
            printf("Opcao invalida: \n");
        }

        printf("fim!");
        return 0;
}