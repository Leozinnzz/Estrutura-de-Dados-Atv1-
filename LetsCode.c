#include <stdio.h>

int main() {

    int n; 

    printf("Digite um valor: ");
    scanf("%d", &n); 

    for (int i=0; i<n; i++) {
        for (int j=n; j > i+1; j--) {
            printf(" * ");
        }
        printf("\n");
    }
}