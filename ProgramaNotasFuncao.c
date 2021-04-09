/* Faça um programa que receba 2 notas do aluno.
	Crie uma função para consistir essas notas (somente aceite nota entre 0 e 10). // Feito
	Crie uma função para calcular a média e outra função para verificar a situação
	do aluno. Se o aluno tiver média menor que 3, deve aparecer a mensagem
	“Reprovado”, senão, se a média for entre 3 e 7, deve aparecer a mensagem
    “Aluno em Exame”. Para os que tiverem média maior ou igual a 7 deve
	aparecer “Aprovado”. */
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 float ValidarNotas(); 
 float MediaNotas(float n1, float n2);
 void SitAluno(float Media);
 
 int main() {
  	setlocale(LC_ALL, "portuguese"); 
  	system("Color 50");
	float n1, n2; 
	n1 = ValidarNotas(); // A função ValidarNotas() receberá os valores válidos 
	n2 = ValidarNotas(); 
	printf("\nNotas: %.1f %.1f", n1, n2); 
	printf("\nA media será: %.1f", MediaNotas(n1, n2));
	
	
	
	
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
		printf("\nNota Válida \n"); 
		
		return nota; //nota é float então a função é do tipo float 
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
			printf("\nSituação do aluno: Reprovado");
		} else if (Media >= 3 && Media < 7) {
			printf("\nSituação do aluno: Aluno em exame");
		} else {
			printf("\nSituação do aluno: Aprovado");
		}
	}
	
