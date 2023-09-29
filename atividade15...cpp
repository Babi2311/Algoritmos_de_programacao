#include <stdio.h>

int main(){
	
	int num, soma, quantidade;
	
	num = 1;
	soma = 0;
	quantidade = 0;
	
	while(soma <= 100){
		soma = soma + num;
		num++;
		quantidade++;
	}
	
	printf("\nquantidade de numero: %d", num);
	printf("\nresultadoda soma: %d", soma);
	
	return 0;
}
