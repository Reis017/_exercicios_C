#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Problema 1.1.10
Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, num determinado dia. 
Para cada casa visitada, é fornecido o número do canal (4,5,7,12) e o número de pessoas que o estavam assistindo naquela casa. 
Se a televisão estivesse desligada, nada era anotado, ou seja, esta casa não entrava na pesquisa. Fazer um algoritmo que:
* leia um número indeterminado de dados, sendo que o flag corresponde ao número
de canal igual a zero.
* calcule a porcentagem de audiência para cada emissora
* escreva o número do canal e a sua respectiva porcentagem.
*/

int main () {
	
	int canal, qtdPessoas=0, audiencia4=0, audiencia5=0, audiencia7=0, audiencia12=0, totalPessoas=0, cont=0;
	float porcent4=0, porcent5=0, porcent7=0, porcent12=0;
	char ligada;
	
	
	do {
		
	printf ("A TV da casa estava ligada ? (S/N) ou 'X' para sair: ");
	scanf (" %c", &ligada);
	toupper(ligada);
	
	if (ligada == 'S'){
		cont++;
		printf ("Informe o canal assitido: ");
		scanf("%d", &canal);
		
		printf ("Informe a quantidade de pessoas: ");
		scanf("%d", &qtdPessoas);
		
		if (canal == 4){
			audiencia4 = audiencia4 + qtdPessoas;
		}else if (canal == 5){
			audiencia5 = audiencia5 + qtdPessoas;
		}else if (canal == 7){
			audiencia7 = audiencia7 + qtdPessoas;
		}else if (canal == 12){
			audiencia12 = audiencia12 + qtdPessoas;
		}
	}	
			
	}while (ligada != 'X');	
	
	
	//totalPessoas = audiencia4 + audiencia5 + audiencia7 + audiencia12;
	
	porcent4 = ((float)audiencia4/(float)cont) * 100;
	porcent5 = ((float)audiencia5/(float)cont) * 100;
	porcent7 = ((float)audiencia7/(float)cont) * 100;
	porcent12 = ((float)audiencia12/(float)cont) * 100;
		
	printf ("Porcentagem canal 4: %.2f\n", porcent4);
	printf ("Porcentagem canal 5: %.2f\n", porcent5);	
	printf ("Porcentagem canal 7: %.2f\n", porcent7);	
	printf ("Porcentagem canal 12: %.2f\n", porcent12);		
		

	
	system ("PAUSE");
	return 0;
	}
