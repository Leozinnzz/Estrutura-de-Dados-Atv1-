#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int cont = 0;
    int m = -100, n = 100; 


    srand(time(NULL)); 

    do { 

    
        int numero =  rand() % (n - m + 1) + m; 
        printf("%d\n", numero);
        cont++;

        if (numero == 0)
            break;

    } while(1);

    printf("Quantidade de numeros: %d\n", cont); 




}
