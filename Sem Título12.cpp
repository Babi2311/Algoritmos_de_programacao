#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	float numerador, denominador, soma;
	
	numerador = 1;
	denominador = 1;
	soma = 0;
	
	for(i=1; i <= 20; i++){
		soma = soma + numerador/denominador;
		numerador = numerador + 2;
		denominador = denominador * 2;
	}
	
		printf("Resultado: %.2f",soma);
	
	return 0;
}
