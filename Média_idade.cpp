#include <stdio.h>
#include <stdlib.h>

/*
Problema 1.1.1
Fazer um algoritmo que:
Leia um n�mero indeterminado de linhas contendo cada uma a idade de um indiv�duo. 
A �ltima linha, que n�o entrar� nos c�lculos, cont�m o valor da idade igual a zero. 
Calcule e escreva a idade m�dia deste grupo de indiv�duos.

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
