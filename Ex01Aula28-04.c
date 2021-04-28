/* Exercício exemplo de fatorial de um número com uso de função recursiva */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, num, fatorial;
	fatorial = 1;
		printf("Informe um número: ");
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
