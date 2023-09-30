#include <stdio.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
	int n, divisor, achou;
	scanf("%d", &n);
	divisor = 2;
	achou = 0;
	
	while(n != 0)
	{
	 while(n % divisor == 0)
	 {
			achou++;
			if(achou >= 1)
			{
				printf("Não é primo\n");
			}
			else
			{
				printf("É primo\n");
			}
		scanf("%d", &n);
     }
	}
	return 0;
}
//esse código está com erro
