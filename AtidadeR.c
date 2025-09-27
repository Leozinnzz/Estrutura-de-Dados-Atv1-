#include <stdio.h>

int main() { 
    
    int i, m, j; 
    char n;

    printf("Digite qualquer digito: ");
    scanf("%c", &n);
    for (j = 6; j >= 1; j--) {
        m = j;
        for (i = m; i >= 1; i--) {
            printf("%c ", n);
        }
        printf("\n");
    }



}