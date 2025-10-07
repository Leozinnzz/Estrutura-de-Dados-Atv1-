#include <stdio.h>
#include <stdbool.h>

int main() { 
	
	int n, maior = 0, menor = 0;
	bool primo;  //aqui foram perdidas umas 2 horas para encontrar esse erro estava como true
	int i, j; 
	
	printf("Digite um valor: "); 
	scanf("%d", &n);
	
	if(n <= 0) {
		printf("Nao existe nenhum numero primo maior que %d.\n", n);
		printf("Menor primo maior que %d: 2\n", n);
	} 
	else {
		//encontrar maior numero primo menor que N
		for(i = n - 1; i > 1; i--) {
			primo = true;
			for(j = 2; j < i; j++) {
				if(i % j == 0) {
					primo = false; 
					break;
				}
			} 
			if (primo) {
				menor = i;
				break; 
			}
		}
		//encontrar menor numero primo
		for(i = n + 1; ; i++) {
			primo = true;
			for(j = 2; j < i; j++) {
				if(i % j == 0) {
					primo = false;  
					break;
				}
			}
			
			if(primo){
				maior = i;
				break;
			}
		}
		
	printf("Maior numero primo menor que N: %d \n", menor);
	printf("Menor numero primo maior que N: %d \n", maior);
			
	}
}
