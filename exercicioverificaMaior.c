/*Faça um programa que receba na função principal 2 números inteiros e os envie para a função verificarMaior. 
Na função verificarMaior verifique e mostre qual o maior valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificaMaior(num);

int main () {
	setlocale(LC_ALL, "portuguese");
	int num1, num2; 
	
	printf("\nDigite o primeiro número: "); scanf("%i", &num1);
	printf("\nDigite o primeiro número: "); scanf("%i", &num2);
	printf("\nO maior número é: %i", verificaMaior(num1, num2));
	
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
