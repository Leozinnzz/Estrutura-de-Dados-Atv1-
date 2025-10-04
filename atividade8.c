#include <stdio.h>

int main () {

    int maior, menor, aux = 0;
    int n1, n2, n3; 

    printf("Digite 3 valores: \n"); 
    scanf("%d %d %d", &n1, &n2, &n3);

    //ordem crescente
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n1 > n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if(n2 > n3)  {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }

    //ordem decrescente
    if (n1 < n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n1 < n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if(n2 < n3)  {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }

    printf("Ordem crescente: \n");
    printf("%d\n%d\n%d\n", n3, n2, n1);
    
    printf("Ordem decrescente\n"); 
    printf("%d\n%d\n%d\n", n1, n2, n3);



    
}