#include <stdio.h>

int main(){
	
	int tipo_defeito, esfera, limpeza, cabo_conector, quebrado_inutilizado;
	float quantidade;
	
	esfera = 0;
	limpeza = 0;
	cabo_conector = 0;
	quebrado_inutilizado = 0;
	
	do{
		printf("[1]Necessita de esfera\n");
		printf("[2]Necessita de limpeza\n");
		printf("[3]Necessita trocar de cabo conector\n");
		printf("[4]Quebrado ou inutulizado\n");
		scanf("%d", &tipo_defeito);
		
		
		switch(tipo_defeito){
			case 1: esfera++; break;
			case 2: limpeza++;  break;
			case 3: cabo_conector++; break;
			case 4: quebrado_inutilizado++; break;
			
		}
		
	}while(tipo_defeito != 0);
	
	quantidade = esfera + limpeza + cabo_conector + quebrado_inutilizado;
	
	printf("Quantidade de mouse: %.f\n ", quantidade);
	printf("\nNecessita de esfera: %d (%.1f%%)", esfera, esfera / quantidade * 100);
	printf("\nNecessita de limpeza: %d (%.1f%%)", limpeza, limpeza / quantidade * 100);
	printf("\nNecessita torcar o cabo conector: %d (%.1f%%)", cabo_conector,cabo_conector / quantidade * 100);
	printf("\nQuerado ou inutilizado: %d (%.1f%%)", quebrado_inutilizado, quebrado_inutilizado / quantidade * 100);
	
	
	return 0;
}
