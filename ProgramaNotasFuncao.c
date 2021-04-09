/* Fa�a um programa que receba 2 notas do aluno.
	Crie uma fun��o para consistir essas notas (somente aceite nota entre 0 e 10). // Feito
	Crie uma fun��o para calcular a m�dia e outra fun��o para verificar a situa��o
	do aluno. Se o aluno tiver m�dia menor que 3, deve aparecer a mensagem
	�Reprovado�, sen�o, se a m�dia for entre 3 e 7, deve aparecer a mensagem
    �Aluno em Exame�. Para os que tiverem m�dia maior ou igual a 7 deve
	aparecer �Aprovado�. */
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 float ValidarNotas(); 
 float MediaNotas(float n1, float n2);
 void SitAluno(float Media);
 
 int main() {
  	setlocale(LC_ALL, "portuguese"); 
	float n1, n2; 
	n1 = ValidarNotas(); // A fun��o ValidarNotas() receber� os valores v�lidos 
	n2 = ValidarNotas(); 
	printf("\nNotas: %.1f %.1f", n1, n2); 
	printf("\nA media ser�: %.1f", MediaNotas(n1, n2));
	
	
	system("pause"); 
	return 0; 
}
	
	float ValidarNotas() 
	{ 
		float nota; 
		do { 
			printf("\nInforme sua nota "); 
			scanf("%f", &nota); 
			
		} while (nota < 0 || nota > 10); 
		printf("\nNota V�lida \n"); 
		
		return nota; //nota � float ent�o a fun��o � do tipo float 
	}
	
	float MediaNotas(float n1, float n2)
	{
		float Media; 
		Media = (n1 + n2) / 2; 
		
		SitAluno(Media);
		
		return Media; 
	}
	
	void SitAluno(float Media) {
		
		if(Media < 3){
			printf("\nReprovado");
		} else if (Media >= 3 && Media < 7) {
			printf("\nAluno em exame");
		} else {
			printf("\nAprovado");
		}
	}
	
