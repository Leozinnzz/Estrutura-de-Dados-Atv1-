#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	//finalizei a lista de introdução :D
	int n, x, y; 
	
	printf("Quantos numeros voce quer imprimir: ");
	scanf("%d", &n); 
	printf("Digite um valor inicial: ");
	scanf("%d", &x);
	printf("Digite um valor final: ");
	scanf("%d", &y);
	
	//intervalo de x ate y
	printf("Numeros do intervalo de x ate y: \n");
	 
	srand(time(NULL));
	for(int i = x; i < y; i++){ 
		int num =  rand() % y + x ;
		if(num > x && num < y)
			printf("%d\n", num);
	}
	
	
	
	
}
