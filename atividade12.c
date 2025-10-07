#include <stdio.h>

int main () { 
		
	int n1, n2; 
	
	
	do { 
		printf("Digite dois valores: \n");
		scanf("%d %d", &n1, &n2); 
		
		if(n1 % 2 != n2 % 2) {
			for(int i = n1+1; i < n2; i++) {
				printf("%d\n", i);
			}
		}

			
		if(n1 % 2 == n2 % 2) 
			break;
			
		
	}while(1);
	
	 
	return 0; 
	
}
