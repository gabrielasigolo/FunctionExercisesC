/* Exerc�cio exemplo de fatorial de um n�mero com uso de fun��o recursiva */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, num, fatorial;
	fatorial = 1;
		printf("Informe um n�mero: ");
		scanf("%d", &num);
		printf("Fatorial %d", funcaoFatorial(num));
		
	
}

	int funcaoFatorial(int n)
	{
		if (n==1)
			return 1;
		else
			return n * funcaoFatorial(n-1);
}
