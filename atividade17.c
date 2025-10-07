#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	
	int n; 
	int x;
	
	printf("Digite uma Quantidade: ");
	scanf("%d", &n);
	
	printf("Digite o numero: ");
	scanf("%d", &x); 
	
	srand(time(NULL)); 
	
	for(int i = 0; i < n; i++) { 
		int num = rand() % x; 
		printf("%d\n", num);
	}
		
	return 0;
	
}
