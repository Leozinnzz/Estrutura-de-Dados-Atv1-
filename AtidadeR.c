#include <stdio.h>

int main() {

    int a;
    int b, aux;

//falta terminar a logica
    do {
        printf("Digite dois valores: \n"); 
        scanf("%d", &a); 
        scanf("%d", &b);
        
    }  while((a % 2 == b % 2)); 

    if (a > b) {
        aux = a; 
        a = b;
        b = aux;
    }

    printf("Numeros do intervalo de %d a %d \n", a, b);
    for (int i = a + 1; i < b; i++) {
        printf("%d\n", i);
    }
}