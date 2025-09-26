#include <stdio.h>

int main() {

    int a;
    int b;

printf("Digite dois valores: \n"); 
scanf("%d", &a);
scanf("%d", &b);
    while (a % 2 != b % 2) {
        scanf("%d", &a);
        scanf("%d", &b);
        if (a % 2 == b % 2) {
            printf("%d\n", a);
            printf("%d\n", b);
        }
    }  
}