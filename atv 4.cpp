#include <stdio.h>

int main (){
int quantidade_produto_A, quantidade_produto_B;
float custo_A, custo_B, desconto, total;

	custo_A = 10.00;
	custo_B = 20.00;


	printf("Quantidade de produtos A: ");
	scanf("%d", &quantidade_produto_A);
	
	printf("Quantidade de produtos B: ");
	scanf("%d", &quantidade_produto_B);
	
	if(quantidade_produto_A > 0 || quantidade_produto_B > 0){
		desconto = 0.15;
	}
		else{
			desconto = 0.10;
		}
		
		
		total = (quantidade_produto_A * custo_A + quantidade_produto_B * custo_B) * (1 - desconto);

		printf("o total da compra e: %.2f", total);


	
	return 0;
}
