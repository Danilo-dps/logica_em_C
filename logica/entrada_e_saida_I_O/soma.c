#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

		setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, n3, subt, soma;

	printf("Insira o primeiro n�mero:\n");
	scanf("%d", &n1);

	printf("Insira o segundo n�mero:\n");
	scanf("%d", &n2);

	soma = (n1+n2);

	printf("A soma �: %d.\n", soma);

	printf("Insira o terceiro n�mero:\n");
	scanf("%d", &n3);

	subt = soma - n3;

	printf("A subtra��o de %d resulta em: %d.\n", n3, subt);

	return 0;

}

