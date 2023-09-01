#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("informe um numero: ");
	scanf("%d", &numero);
	
	if(numero %2 ==0 || numero %7 ==0){
		printf("seu numero é divisivel por 2 ou 7");
	}
	else{
		printf("seu numero não é divisivel por 2 ou 7");
	}
	return 0;
}
