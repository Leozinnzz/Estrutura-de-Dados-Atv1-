#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

int main() {

    int x; 
    bool primo;

    printf("Digite um numero x: " );
    scanf("%d", &x);


    srand(time(NULL));
    do { 

        int number = rand() % (x + 1);
        printf("%d\n", number);

        //achar o numero primo
        primo = true;
        if (number < 2 ) {
            primo = false;
        } else {
            for(int j=2; j <= sqrt(number); j++){
            if(number % j == 0)
                primo = false;
            }
        }
        
        

        if (primo) {
            printf("Numero primo encontrado: \n");
            break;
        }


    }while(1);

    return 0; 




}
