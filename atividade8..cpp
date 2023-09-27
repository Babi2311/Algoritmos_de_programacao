#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tabuada, comecar, terminar, i;
	
	printf("informe qual a tabuada desejada: ");
	scanf("%d", &tabuada);
	
	printf("informe por qual numero deseja começar: ");
	scanf("%d", &comecar);
	
	printf("por qual numero deseja terminar: ");
	scanf("%d", &terminar);
	
	for(i = comecar; i <= terminar; i++){
		printf("\n%d x %d = %d", tabuada, i, tabuada * i);
	}
		printf("\naqui esta a tabuada desejada :)");
	
	return 0;
}
