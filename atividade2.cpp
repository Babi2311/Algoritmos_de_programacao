#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("informe o numero: ");
	scanf("%d", &num);
	
	if ( num >= 0 ){
		printf("o valor é: %d", num);
	}
	else if ( num < 0 ){
		printf("o valor é: %d", -num);
	}
	return 0;
}
