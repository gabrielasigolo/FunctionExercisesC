/* Fa�a um programa que na fun��o principal chame as fun��es:
--- Fun��o Receber --- recebe os valores do vetor idade (devem ser recebidas 10 idades)
--- Fun��o Exibir --- mostre as idades recebidas */ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Receber ();
void Exibir ();

int main () {
	setlocale(LC_ALL, "portuguese");
	int idades[10], i;
	for(i=0; i < 10; i++){
		idades[i] = Receber(); 
	}
	Exibir();
	 
	system("pause");
	return 0; 
	
}

	int Receber () {
		int idade;
		printf("Digite uma idade: ");
		scanf("%i", &idade);
	}
	
	void Exibir(int refIdade[]) {
		int i;
		for(i=0; i < 10; i++){
			printf("Idade: %i", refIdade[i]);
		}
	}
