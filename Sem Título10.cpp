#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	float numerador, denominador, soma;
	
	numerador = 1;
	denominador = 100;
	soma = 0;
	
	for(i=1; i <= 100; i++){
		soma = soma + numerador/denominador;
		numerador++;
		denominador--;
	}
	
		printf("o resultado: %.2f",soma);
	
	
	return 0;
}
