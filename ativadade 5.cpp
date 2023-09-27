#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num, i,quantidade;
	
	quantidade = 0;
	
	printf("informe numero: ");
	scanf("%d", &num);
	
	for(i=1; i <= num; i++){
		if( i % 2 == 0){
			printf("%d", i);
			quantidade++;
		}
	}
	
	
	printf("\n quantidade de numeros apresentados: %d", quantidade);
	
	
	return 0;
}
