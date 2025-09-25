#include <stdio.h> 
#include <stdlib.h>

int main() {

    int n = 50; 
    float pi = 3.14159;
    int k = 2;
    
    printf("Saida: \n %.2f\n  %.1f\n  %.1f\n  %03d\n 0%d\n  %d%20d\n    ", pi, (pi * 2), (float) (n * pi), k, (n / 2), (n * k), n );


    return 0;


}