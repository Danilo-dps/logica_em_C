#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main (){
		setlocale(LC_ALL, "Portuguese");
		
	int a1, a2, a3;
	
	printf("Digite um n�mero:\n");
	scanf("%d", &a1);
	
	a2 = a1 * 2;
	a3 = a1 / 2;
	
	if(a1 % 2 == 0){
		printf("O n�mero � par.\n");
	}
		if(a1 % 2 == 1)
		{
			printf("O n�mero � impar.\n");
		}
	
	printf("O dobro do n�mero � %d.\n", a2);
	printf("A metade do n�mero � %d.\n", a3);
		
		
	
	return 0;
}
