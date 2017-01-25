#include<stdio.h>
	int main(){
		int codigo_peca,numero_peca;
		
		float valor_peca, valor_pagar1,valor_pagar2,valor_total;
		
		scanf("%d" "%d" "%f", &codigo_peca, &numero_peca, &valor_peca);
		valor_pagar1 = numero_peca * valor_peca;
		
		scanf("%d" "%d" "%f", &codigo_peca, &numero_peca, &valor_peca);
		valor_pagar2 = numero_peca * valor_peca;
		
		valor_total = valor_pagar1 + valor_pagar2;
		printf("VALOR A PAGAR: R$ %.2f\n", valor_total);
		
	
		return 0;
	}


