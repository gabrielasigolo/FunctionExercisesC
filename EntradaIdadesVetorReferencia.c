/*Fa�a um programa que na fun��o principal chame as fun��es:
-- Fun��o Receber -- recebe os valores do vetor idade (devem ser recebidas 10 idades)
-- Fun��o Mostrar -- mostre as idades recebidas */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cadastrarIdades(int pidades[]);
void exibirIdades(int pidades[]);
	
int main()
{
	int idades[10];
	cadastrarIdades(idades);
	exibirIdades(idades);	
	system("pause");
	return 0;
}

void cadastrarIdades(int pidades[])
{
	int i;
	for (i=0; i<10; i++)
	{
		printf("\nInforme as Idades");
		scanf("%i", &pidades[i]);
	}
}

void exibirIdades(int pidades[])
{
	int i;
	for (i=0; i< 10; i++)
	{
		printf("\nIdade %i", pidades[i]);
	}
}
