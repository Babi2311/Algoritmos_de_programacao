#include <stdio.h>

int main (){
	
	int vetor[5], i;
	float soma, media;
	
	soma = 0;
	
	for(i = 0;i < 5;i++){
		printf("digite o numero [%d]: ",i);
		scanf("%d", &vetor[i]);
		
		soma = soma + vetor[i];
		
	}
		
		media = soma / 5;
		printf("media: %.2f \n", media);
		printf("valores maior ou igual a media: \n");
		
		for(i = 0; i < 5; i++){
		if(vetor[i] >= media){
			printf("%d\n", vetor[i]);
		}
		
		
	}	
	
	return 0;
}
