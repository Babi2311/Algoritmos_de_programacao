#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2;
	
	printf("informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("informe o primeiro numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2) {
		printf("%d e %d", num2, num1);
	}
	else {
		printf("%d e %d", num1, num2);
	}
	return 0;
}
