/*Faça um programa que na função principal chame as funções:
-- Função Receber -- recebe os valores do vetor idade (devem ser recebidas 10 idades)
-- Função Mostrar -- mostre as idades recebidas */

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
