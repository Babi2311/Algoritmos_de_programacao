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
	
	printf("olá, %s!", nome);
	
	printf("\nQuer jogar (S/N): ");
	scanf(" %c", &opcao);
	
	if(opcao == 'n' || opcao =='N'){
		printf("\nok, Fica pra próxima!");
		return 0;
	}
	
	printf("\nEba! Vamos lá");
	
	srand(time(NULL));
	resposta = 1 + rand() % 5;
	
	//printf("\n%d", resposta);
	
	printf("\n|_1_| |_2_| |_3_| |_4_| |_5_|");
	
	do{
		printf("\nEm qual armario você acha que o goblin está escondido?: ");
		scanf("%d", &sujestao);
		
		if(sujestao != resposta){
		printf("opa, você errou o goblin não está aí :(");
	}
		
	}while(resposta != sujestao);
	
	printf("Parabens xuxu você encontrou o goblin =D, mas eles acabou fugindo de medo (T-T)");
	

	
	return 0;
}
