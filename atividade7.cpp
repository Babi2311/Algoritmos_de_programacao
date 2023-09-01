#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("informe um numero: ");
	scanf("%d", &numero);
	
	if(numero >= 0){
		if(numero %2 == 0){
			printf("Par");
		}
		else{
			printf("Impar");
		}
	}
	else{
		printf("%d", numero * -1);
	}	
	
	return 0;
}
