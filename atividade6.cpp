#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num, soma;
	
	soma = 0;
	
	do{ 
	printf("Informe numero: ");
		scanf("%d", &num);
	
		soma = soma + num;
		
		
	}while(num != 0);
	
	
	printf("Resultado: %d", soma);
	
	return 0;
	
}
