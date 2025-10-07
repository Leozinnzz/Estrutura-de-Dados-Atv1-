#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	
	int n;
	bool primo = true; 
	
	printf("Digite um numero: "); 
	scanf("%d", &n); 
	
	if(n <= 0)
		primo = false;
	for (int i = 2; i <= n / 2; i++) {
		if(n % i == 0){	
			primo = false; 
		}
	}
	
	if(primo) {
		printf("%d E um numero primo \n", n);
	} else { 
		printf("%d Nao e um numero primo \n", n);
	  }
			
	return 0;
}
