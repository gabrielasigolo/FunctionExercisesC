/*Fa�a um programa que receba na fun��o principal 2 n�meros inteiros e os envie para a fun��o verificarMaior. 
Na fun��o verificarMaior verifique e mostre qual o maior valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificaMaior(num);

int main () {
	setlocale(LC_ALL, "portuguese");
	int num1, num2; 
	
	printf("\nDigite o primeiro n�mero: "); scanf("%i", &num1);
	printf("\nDigite o primeiro n�mero: "); scanf("%i", &num2);
	printf("\nO maior n�mero �: %i", verificaMaior(num1, num2));
	
	system("pause");
	return 0; 
}

	int verificaMaior(num1, num2) {
		int Maior; 
		if(num1 > num2){
			Maior = num1; 
		} else {
			Maior = num2; 
		}
		
		return Maior;
	}
