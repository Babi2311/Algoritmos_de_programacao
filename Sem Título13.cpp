#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	float numerador, denominador, soma;
	
	numerador = 1000;
	denominador = 1;
	soma = 0;
	
	for(i=1; i <= 50; i++){
		if(i % 2 != 0){
		soma = soma + numerador / denominador;
		}
		else{
		soma = soma - numerador / denominador;
		}
		numerador = numerador - 3;
		denominador = denominador + 1;
	}
	
		printf("Resultado: %.2f", soma);
	
	return 0;
}
