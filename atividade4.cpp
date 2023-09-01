#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura;
	char genero;
	
	printf("Informe altura: ");
	scanf("%f", &altura);
	
	printf("Informe genero (M/F): ");
	scanf(" %c", &genero);
	
	if(genero == 'M' || genero == 'm'){
		printf("Peso ideal: %.1f", 72.7 * altura - 58);
	}
	else {
		printf("Peso ideal: %.1f", 62.1 * altura - 44.7);
	}
	
	
	
	return 0;
} 
