/*Faça um programa que :
Na função principal mostre o menu (que está em outra função), receba
dois valores inteiros e a operação desejada. Conforme a operação desejada
chame a função da operação escolhida, que poderá ser somar ou multiplicar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	float Soma(float num1, float num2); // -- Função Soma
	float Sub(float num1, float num2);	// -- Função Subtração		Protótipos da função
	float Div(float num1, float num2);	// -- Função Divisão
	float Mult(float num1, float num2);	// -- Função Multiplicação
	void Menu();

int main (){
	setlocale(LC_ALL, "portuguese");
	
	float num1, num2, res; 
	char op; 
	
	do{
	printf("\nDigite a operação que será feita: "); fflush(stdin); scanf("%c", &op);
	if(op == 'f') {
		return 0;	// Se o operador for igual a 'f' o programa parará 
	}

	printf("\nDigite o primeiro número: "); scanf("%f", &num1);
	printf("\nDigite o segundo número: "); scanf("%f", &num2);
	
	switch(op){
		case '+': printf("Resultado: %.2f", Soma(num1, num2));
		break;
		
		case '-': printf("Resultado: %.2f", Sub(num1, num2));				// Chamada das funções para cada escolha de operação
		break; 
		
		case '*': printf("Resultado: %.2f", Mult(num1, num2));
		break;
		
		case '/': Div(num1, num2);
		break;	
	} 
	
		system("pause");
	
	}while (op != "f");

	system("pause");
	return 0; 

}

	float Soma(float num1, float num2) {
		float Soma; 
		Soma = num1 + num2; 
		return Soma; 
	}
	
	float Sub(float num1, float num2) {
		float Sub; 
		Sub = num1 - num2; 
		return Sub; 
	}
	
	float Div(float num1, float num2) {
		float Div; 
		Div = num1 / num2;
			
		if(num2 != 0){
			Div = num1 / num2;
			printf("Resultado: %.2f", Div);	
		} else {
			printf("Não existe divisão por 0");
		}
		
	}
	
	float Mult(float num1, float num2) { 
		float Mult; 
		Mult = num1 * num2; 
		return Mult; 
	}
	
	void Menu() {
		system("Color 50");
	printf("\n\t\t-------------------------\n");
	printf("\n\t\t    Calculadora          \n");
	printf("\n\t\t   < + > - adição          \n");
	printf("\n\t\t   < - > - subtração          \n");
	printf("\n\t\t   < / > - Divisão       \n");
	printf("\n\t\t-------------------------\n");
	}
