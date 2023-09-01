#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("informe o numero: ");
	scanf("%d", &num);
	
	if(num < 18){
		printf("menor de idade");
	}
	else if(num >= 65){
		printf("terceira idade");
	}
	else{
		printf("maior de idade");
	}
	
	return 0;
}
