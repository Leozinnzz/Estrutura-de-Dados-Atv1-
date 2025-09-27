#include <stdio.h>
#include <stdbool.h>

int main () {
    
    int N, i; 
    bool primo = true;


    printf("Digite um numero: ");
    scanf("%d", &N); 

    if (N <= 1) {
        primo = false; 
    } else {
        for (i = 2; i <= N / 2; i++){
            if (N % i == 0) {
                primo = false;
                break;
            }
        } 
    }

    if(primo) {
        printf("%d e um numero primo\n", N);
    } else {
        printf("%d nao e um numero primo\n", N);
    }

    return 0;
}

