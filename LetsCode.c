#include <stdio.h>

int main() {
    float media, n1, n2, n3;
    int p1, p2, p3;

    printf("Digite 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3); 

    if(n1 >= n2 && n1 >= n3) {
        p1 = 4; p2 = 3; p3 = 3; 
    } 
    else if (n2 >= n1 && n2 >= n3) {
        p1 = 3; p2 = 4; p3 = 3;
    }
    else {
        p1 = 3; p2 = 3; p3 = 4;
    }

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    if (media >= 6) {
        printf("Aprovado!\n");
    }
    else {
        printf("Reprovado!\n");
    }

    printf("Media ponderada %.2f \n", media);

    

}