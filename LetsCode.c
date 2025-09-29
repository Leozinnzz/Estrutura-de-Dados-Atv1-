#include <stdio.h> 

int main() {

    int peso;
    float altura, imc; 

    printf("Digite seu peso: ");
    scanf("%d", &peso); 
    printf("Digite sua altura ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Esta com o peso normal:\n"); 
    } else if (imc >= 24.9 && imc < 29.0) {
        printf("Sobrepeso:\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Obesidade nivel I");
    } else if (imc >= 35 && imc < 39.9) {
        printf("Obesidade nivel II");
    } else {
        printf("Obesidade nivel III");
    }

    return 0;
}