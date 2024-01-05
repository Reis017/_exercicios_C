#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
Problema 1.1.9
Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em certo per�odo. Fazer um algoritmo que:
* leia inicialmente o n�mero de crian�as nascidas no per�odo
* leia, em seguida, um n�mero indeterminado de linhas, contendo, cada uma, o sexo de uma crian�a morta (masculino, feminino) e o n�mero de meses de vida da crian�a. A �ltima linha, 
que n�o entrar� nos c�lculos contem no lugar do sexo a palavra "vazio".
Determine e imprima:
a) a porcentagem de crian�as mortas no per�odo
b) a porcentagem de crian�as do sexo masculino mortas no per�odo
c) a porcentagem de crian�as que viveram 24 meses ou menos no per�odo
*/

int main (){
	
	
	int periodo_nasc, num_criancas, meses_vida, contadorM=0, contadorMeses=0, contadorGeral=0, ContadorMeses=0, i = 1;
	char sexo;
	float media_cm, media_cmm, media_menos24;
	
	printf ("Periodo de nascimento em meses: \n");
	scanf ("%d", &periodo_nasc);
	
	printf ("Numero de criancas nascidas neste periodo: \n");
	scanf ("%d", &num_criancas);
	
	printf ("\n -------------Informacoes criancas mortas--------------\n");
	while(sexo != 'X'){
		
		printf ("----------------------Crianca %d-------------------------\n", i);
		
		printf ("Sexo da crianca (M/F) ou digite 'X' para encerrar: \n");
		scanf (" %c", &sexo);
		toupper(sexo);
		
		if (sexo == 'X'){
			printf ("Programa encerrado\n");
			break;
		}
		
		if (sexo == 'M'){
			contadorM++;
		}
		
		printf ("Meses de vida da crianca: \n");
		scanf ("%d", &meses_vida);
		
		
		if (meses_vida <= 24){
			contadorMeses++;
		}
		
		contadorGeral++;
		i++;
	}
	printf ("\nVazio\n");
	
	media_cm = ((float)contadorGeral/(float)num_criancas) * 100;
	
	media_cmm = ((float)contadorM/(float)num_criancas) * 100;
	
	media_menos24 = ((float)contadorMeses/(float)periodo_nasc) * 100;
	
	
	printf ("a porcentagem de criancas mortas no perido: %.2f\n", media_cm);
	
	printf ("a porcentagem de criancas do sexo masculino mortas no periodo: %.2f\n", media_cmm);
	
	printf ("a porcentagem de criacnas que viveram 24 meses ou menos no periodo: %.2f\n", media_menos24);
	
	
	system ("PAUSE");
	return 0;
}
