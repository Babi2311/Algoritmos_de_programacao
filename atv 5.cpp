#include <stdio.h>

int main() {
float total_ab, quant_litros, valor_abst;
int tipo_comb, i;
   
    
    total_ab = 0;

   
    for (i = 1; i <= 5; ++i) {

       
        printf("Tipo de combustivel (1 para etanol, 2 para gasolina, 3 para diesel): ");
        scanf(" %d", &tipo_comb);

        printf("Quantidade de litros abastecidos: ");
        scanf("%f", &quant_litros);

        
        valor_abst = 0;
        
        if(tipo_comb == 1){
            valor_abst += quant_litros * 4.39;
    	}
    	
        else if(tipo_comb == 2){
        	valor_abst += quant_litros * 5.29;
        }
         	
        else{
         	valor_abst += quant_litros * 6.85;
		}

        total_ab += valor_abst;
    }

    
    printf("\nO valor total dos abastecimentos e R$ %.2f\n", total_ab);

    return 0;
}


