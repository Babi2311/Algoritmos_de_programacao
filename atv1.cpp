#include <stdio.h>

int main (){
	
	int vetor[5], i;
	
	for(i = 0;i < 5;i++){
		printf("digite o numero [%d]: ",i);
		scanf("%d", &vetor[i]);
		
	}

	printf("numero impares ");

	for(i=0;i<5;i++){
		if(vetor[i] % 2 != 0){
			printf("%d ", vetor[i]);
		}
	}
	
	
	
	return 0;
}
