#include <stdio.h>

int main(){
	
	int opcao, num, quant_pares, quant_impares;
	
	quant_pares = 0;
	quant_impares = 0;

	do{
	
		printf("# MENU #\n");
		printf("[1] Digitar numero par\n");
		printf("[2] Digitar numero impar\n");
		printf("[3] Sair\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				do{
					printf("informe numero par: ");
					scanf("%d", &num);
					
				}while(num % 2 != 0);
				
				quant_pares++;
				break;
				
			case 2:
			do{
					printf("informe numero impar: ");
					scanf("%d", &num);
					
			
			}while(num % 2 == 0);
			
			quant_impares++;
			break;
				
		}
		
		}while(opcao != 3);
		
	
	printf("\nPares: %d", quant_pares);
	printf("\nImpares: %d", quant_impares);
	
	
	return 0;
}
