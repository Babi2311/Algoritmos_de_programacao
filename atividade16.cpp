#include <stdio.h>

int main(){
	
	float num, menor, maior, amplitude;
	
	printf("informe um numero: ");
	scanf("%f", &num);
	
	menor = num;
	maior = num;
	
	while(num != 0 ){
		if(num < menor){
			menor = num;
		}
		if(num > maior){
			maior = num;
		}
		printf("informe um numero: ");
		scanf("%f", num);
	}
	
	amplitude = maior - menor;
	
	printf("A amplitude e: %.1f",amplitude);
	
	return 0;
}
