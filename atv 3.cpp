#include <stdio.h>

int main (){
	
	float G, H, T;
	
	printf("informe a altura: ");
	scanf("%f", &H);
	
	printf("informe o tempo de queda: ");
	scanf("%f", &T);
	
	G = (2 * H) / (T * T);
	
	if(G >= 8.5, G <= 9.0){
		printf("Voce esta em Venus");
	}
	
		else if(G >= 10.0, G <= 10.5){
			printf("Voce esta em Saturno");
		}	
		
			else if(G >= 24.5, G <= 25.0){
				printf("Voce esta em Jupiter");
			}	
			
				else{
					printf("Desconhecido!!");
				}	
		
		
	return 0;
}
