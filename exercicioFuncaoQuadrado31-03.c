#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	
	int num; 
	printf("\nInforme um valor: "); scanf("%i", &num);
	printf("\nO quadrado de %i é %i ", num, calcularQuadrado(num));
	system("pause");
	return 0; 
}

int calcularQuadrado(cNum) {
	int quadrado;
	quadrado = cNum * cNum; 
	return quadrado; 
}
