#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	if( numero >= 20 && numero <= 90){
		printf("seu numero está entre 20 e 90");
	}
	else {
		printf("seu numero não esta entre 20 e 90");
	}
	return 0;
}
