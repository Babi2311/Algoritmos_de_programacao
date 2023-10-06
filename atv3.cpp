#include <stdio.h>

int main (){
	
	int A[5], B[5], i;
	

	
	for(i = 0;i < 5;i++){
		printf("digite o numero [%d]: ",i);
		scanf("%d", &A[i]);
		
	}
	
	for(i = 0; i < 5; i++){
		B[i] = A[i] * 2;
		printf("%d ", B[i]);
		
	}

	
	return 0;
}
