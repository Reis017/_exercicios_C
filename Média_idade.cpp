#include <stdio.h>
#include <stdlib.h>

/*
Problema 1.1.1
Fazer um algoritmo que:
Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo. 
A última linha, que não entrará nos cálculos, contém o valor da idade igual a zero. 
Calcule e escreva a idade média deste grupo de indivíduos.

*/


int main (){
	
	int idade, somaIdades=0, pessoas=0;
	 float media=0;
	
	do{
		
		printf ("Informe a idade: ");
		scanf ("%d", &idade);
		pessoas = pessoas + 1;
		somaIdades = somaIdades + idade;
		
		if (idade == 0){
			pessoas = pessoas - 1;
			break;
		}
		
	}while(idade != 0);
	printf ("0\n");
	
	media = (float)somaIdades/(float)pessoas;
	
	printf ("\n Media de idade das pessoas: %f \n", media);
	
	system ("PAUSE");
	return 0;
}
