#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	char nome[21], opcao;
	int resposta, sujestao;		
	
	printf("informe seu nome: ");
	scanf("%s", nome);
	
	printf("ol�, %s!", nome);
	
	printf("\nQuer jogar (S/N): ");
	scanf(" %c", &opcao);
	
	if(opcao == 'n' || opcao =='N'){
		printf("\nok, Fica pra pr�xima!");
		return 0;
	}
	
	printf("\nEba! Vamos l�");
	
	srand(time(NULL));
	resposta = 1 + rand() % 5;
	
	//printf("\n%d", resposta);
	
	printf("\n|_1_| |_2_| |_3_| |_4_| |_5_|");
	
	do{
		printf("\nEm qual armario voc� acha que o goblin est� escondido?: ");
		scanf("%d", &sujestao);
		
		if(sujestao != resposta){
		printf("opa, voc� errou o goblin n�o est� a� :(");
	}
		
	}while(resposta != sujestao);
	
	printf("Parabens xuxu voc� encontrou o goblin =D, mas eles acabou fugindo de medo (T-T)");
	

	
	return 0;
}
