#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("informe um n�mero de 0 a 9: ");
	scanf("%d", &num);
	
	switch(num){
		case 0: printf("zero."); break;
		case 1: printf("um."); break;
		case 2: printf("dois."); break;
		case 3: printf("tr�s."); break;
		case 4: printf("quatro."); break;
		case 5: printf("cinco."); break;
		case 6: printf("seis."); break;
		case 7: printf("sete."); break;
		case 8: printf("oito."); break;
		case 9: printf("nove."); break;
		default: printf("n�mero inv�lido.");
	}
	
	return 0;
}
