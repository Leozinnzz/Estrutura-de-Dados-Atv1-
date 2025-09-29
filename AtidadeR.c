#include <stdio.h>

int main () {

    int n, i, m, j; 

    printf("Digite qualquer numero: "); 
    scanf("%d", &n); 

    for(i = n; i >= 1; i--) {
        m = i;
        for (j = m; j >= 1; j--) {
            printf(" * ");
        }
        printf("\n");
    }
}