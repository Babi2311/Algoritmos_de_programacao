#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("informe um numero: ");
	scanf("%d", &numero);
	
	if(numero %2 ==0 && numero %3 ==0){
		printf("seu numero é divisivel por 2 e 3");
	}
	else{
		printf("seu numero não é divisivel");
	}
	return 0;
}
