#include <stdio.h> 

int main() {
    
    int vect[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
    int i; 


    printf("Out \n");
    for (i = 0; i < 20; i++){

        if(vect[i] % 3 == 0) {
            continue;
        }
        
        if (vect[i] == 15) {
            break;
        } 
        printf("%d ", vect[i]);
    }


    return 0;
}