#include <stdio.h>

int main() {

    int mes; 

    printf("Digita o numero do mes: ");
    scanf("%d", &mes);


    switch (mes) {
        case 1:
            printf("Janeiro"); 
            break;
        case 2: 
            printf("Fevereiro");
            break;
        case 3: 
            printf("Março"); 
            break; 
        case 4: 
            printf("Abril"); 
            break;
        case 5: 
            printf("Maio");
            break;
        case 6: 
            printf("Junho");
            break;
        case 7: 
            printf("Julho"); 
            break;
        case 8: 
            printf("Agosto"); 
            break;
        case 9: 
            printf("Setembro");
            break; 
        case 10: 
            printf("Outrubro"); 
            break; 
        case 11: 
            printf("Novembro"); 
            break; 
        case 12: 
            printf("Dezembro");
            break; 
        default: 
            printf("Esse mes nao existe: "); 
    }
}
