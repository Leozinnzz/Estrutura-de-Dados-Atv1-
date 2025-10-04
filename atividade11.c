#include <stdio.h>


int main() {

    int n, maior, cont = 0, menor; 


    printf("Digite um valor: ");
    scanf("%d", &n); 
    

    //crescente
    printf("Pares Decressentes: \n");
    for(int i=n; i >= 0; i--){
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    //decressente
    printf("Impares Crescentes: \n");
    for(int j = 0; j <= n; j++) {
        if(j % 2 != 0) {
            printf("%d\n", j);
        }
    }
}