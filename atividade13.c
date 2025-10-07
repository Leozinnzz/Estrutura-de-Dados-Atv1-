	#include <stdio.h>

	int main () {

		int n, sum = 0;  
		int num;
		int maior, menor;
		
		printf("Digite a quantidade de numeros: ");
		scanf("%d", &n);
		
		printf("Digite os numeros: \n"); 
		/*perdi quase 1 hora pq coloquei um do while dentro do for
		e nao sabia pq o loop estava dando erro */		
			for(int i = 0; i < n; i++) { 
				scanf("%d", &num);
				
				if(!i) 
					maior = menor = num;
				
				if(num > 0) {
					sum += num;
					maior = (num > maior) ? num : maior; 
					menor = (num < menor) ? num : menor;
				}
			}

		printf("Maior valor lido: %d\n", maior); 
		printf("Menor valor lido: %d\n", menor);
		printf("Soma dos valores lidos: %d \n", sum); 
		printf("Media: %.2f\n", (float) sum / n); 
		
		return 0;
		
		
		
	}
