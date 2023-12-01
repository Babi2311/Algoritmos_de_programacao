#include <stdio.h>

int main (){
	
float salario;

	printf("informe seu salario: ");
	scanf("%f", &salario);
	
	if(salario < 0){
		printf("Erro....");
		return 0;
	}
		if(salario < 1.500){
			salario = salario * 0.95;
			printf("Esse e seu salario liquido %.3f ", salario);
		}
			else if(salario >= 1.500, salario < 2.500){
				salario = salario * 0.92;
				printf("Esse e seu salario liquido %.3f ", salario);
			}
				else{
					salario = salario * 0.90;
					printf("Esse e seu salario liquido %.3f ", salario);
				}
	
	
	return 0;
}
