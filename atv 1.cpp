#include <stdio.h>

int main (){
	
	int A, B, multiplicacao;
	
	multiplicacao = 0;
	
	printf("informe um valor para A: ");
	scanf("%d", &A);
	
	printf("informe um valor para B: ");
	scanf("%d", &B);
	
	
	multiplicacao = A * B;
	
	if(multiplicacao > 0){
		printf("seu numero e positivo");
	}
		else if(multiplicacao == 0){
			printf("seu numero e igual a zero");
		}
			else{
				printf("seu numero e negativo");
			}
	
	
	
	return 0;
}
