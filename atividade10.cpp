#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	float copias;
	
	printf("informe o numero de copias efetuadas: ");
	scanf("%f", &copias);
	
	if( copias <= 100){
		printf("se você relizou um total de cópias menor ou igual a 100 o valor a pagar é: %f", copias * 0.25);
	}
	else if(copias > 100){
		printf("se você realizou um total de cópias maior que 100 o valor a pagar é: %f", copias * 0.20);
	}
	
	return 0;
}
