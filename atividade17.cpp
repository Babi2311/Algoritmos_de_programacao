#include <stdio.h>

int main(){
	
	int opcao;
	
	do{
		printf("# MENU #\n");
		printf("\n[1]Inserir");
		printf("\n[2]Excluir");
		printf("\n[3]Consultar");
		printf("\n[4]Listar");
		printf("\n[5]Sair\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Opcao escolhida: Inserir\n");
				break;
			case 2: 
			printf("Opcao escolhida: Excluir\n");
				break;
			case 3:
				printf("Opcao escolhida: Consultar\n");
				break;
			case 4:
				printf("Opcao escolhida: Listar\n");
				break;
		}
		
	}while(opcao != 5);
	
	return 0;
}
