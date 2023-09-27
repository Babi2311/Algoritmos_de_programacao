#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tabuada, i;
	
	printf("informe qual tabuada deseja ver:");
	scanf("%d", &tabuada);
	
	for(i=1; i <= 10; i++){
		
		printf("\n %d x %d = %d", tabuada, i , tabuada*i);
	
	}
	
	
	
	
	return 0;
}
