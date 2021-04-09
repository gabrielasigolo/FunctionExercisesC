/*Fa�a um programa que :
Na fun��o principal mostre o menu (que est� em outra fun��o), receba
dois valores inteiros e a opera��o desejada. Conforme a opera��o desejada
chame a fun��o da opera��o escolhida, que poder� ser somar ou multiplicar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	float Soma(float num1, float num2); // -- Fun��o Soma
	float Sub(float num1, float num2);	// -- Fun��o Subtra��o		Prot�tipos da fun��o
	float Div(float num1, float num2);	// -- Fun��o Divis�o
	float Mult(float num1, float num2);	// -- Fun��o Multiplica��o
	void Menu();

int main (){
	setlocale(LC_ALL, "portuguese");
	
	float num1, num2, res; 
	char op; 
	
	do{
	printf("\nDigite a opera��o que ser� feita: "); fflush(stdin); scanf("%c", &op);
	if(op == 'f') {
		return 0;	// Se o operador for igual a 'f' o programa parar� 
	}

	printf("\nDigite o primeiro n�mero: "); scanf("%f", &num1);
	printf("\nDigite o segundo n�mero: "); scanf("%f", &num2);
	
	switch(op){
		case '+': printf("Resultado: %.2f", Soma(num1, num2));
		break;
		
		case '-': printf("Resultado: %.2f", Sub(num1, num2));				// Chamada das fun��es para cada escolha de opera��o
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
			printf("N�o existe divis�o por 0");
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
	printf("\n\t\t   < + > - adi��o          \n");
	printf("\n\t\t   < - > - subtra��o          \n");
	printf("\n\t\t   < / > - Divis�o       \n");
	printf("\n\t\t-------------------------\n");
	}
