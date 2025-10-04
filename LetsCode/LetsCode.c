#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {

    int alg; 


    srand(time(NULL)); 
    do { 

        int alg = 999 + rand() % 9999; 
        
        int m = alg / 1000;
        int c = (alg % 1000) / 100;
        int d = ((alg % 1000) % 100) /10;
        int u = (((alg %1000) %100) %10); 
    
        int sumAlg = m + c + d + u;
        int powAlg = (sumAlg * sumAlg * sumAlg);
        
        if(powAlg != alg)
            printf("%d\n", alg);

        
        if(powAlg == alg) {
            printf("O numero %d ao cubo e igual:  %d ", sumAlg, powAlg);
            break;
        }


    }while(1);

}