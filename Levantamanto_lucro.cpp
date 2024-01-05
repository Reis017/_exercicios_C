#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

/*
Problema 1.1.4
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar numa linha para cada mercadoria com o nome, preço de compra e preço de venda das mesmas.
Fazer um algoritmo que:
* determine e escreva quantas mercadorias proporcionam:
a) lucro menor que 10%
b) lucro entre 10% e 20%
c) lucro maior que 20%
* determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.
Obs.: o aluno deve adotar um flag.
*/



int main () {
		

	int i, num, cont_lucro_1 = 0, cont_lucro_2 = 0, cont_lucro_3 = 0, lucro_total= 0, valor_total_compra= 0, valor_total_venda= 0;
	float lucro= 0, preco_compra [num], preco_venda[num];
	char nome[50];
	
	printf ("Informe a quantidad de mercadorias a serem analisadas: \n");
	scanf ("%d", &num);
	
	for (int i = 0; i < num; i++){
		
		printf ("\nInforme o nome da mercadoria: ");
		scanf ("%s", &nome[i]);
		
		printf ("Informe o valor de compra: ");
		scanf ("%f", &preco_compra[i]);
		
		printf ("Informe o valor de venda: ");
		scanf ("%f", &preco_venda[i]);
		
		valor_total_compra = valor_total_compra + preco_compra[i];
		valor_total_venda = valor_total_venda + preco_venda[i];
		
		lucro = ((preco_venda[i]/preco_compra[i] - 1) * 100);
		
		
		lucro_total = valor_total_venda - valor_total_compra;
		
		if (lucro < 10){
			cont_lucro_1 = cont_lucro_1 + 1;
		}else if (lucro >= 10 && lucro < 20){
			cont_lucro_2 = cont_lucro_2 + 1;
		}else{
			cont_lucro_3 = cont_lucro_3 + 1;
		}
	}
	
	printf ("\n\n Produtos com lucro menor que 10 = %d\n", cont_lucro_1);
	printf (" Produtos com lucro Entre 10 e 20 = %d\n", cont_lucro_2);
	printf (" Produtos com lucro maior que 20 = %d\n", cont_lucro_3);
	printf ("Valor de compra total = %d\n", valor_total_compra);
	printf ("Valor de venda total = %d\n", valor_total_venda);
	printf ("Lucro total = %d\n", lucro_total);
	
	system ("PAUSE");
	return 0;
	}

