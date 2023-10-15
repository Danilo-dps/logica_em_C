#include <stdio.h>

int main(){
	int n, divisor, achou;
	scanf("%d", &n);
	divisor = 2;
	achou = 0;
	
	/* repete enquanto o divisor for menor que n E n�o achou nenhum divisor*/
	while(divisor < n && !achou)
	{
		if(n % divisor == 0)
		{
			achou = 1;
			//imprimindo o primeiro divisor encontrado
		}
		else
		{
			//incrementa e tenta com o pr�ximo
			divisor++;
		}
	}
	if(achou)
	{
		//se achou um divisor, ent�o n n�o � primo
	    printf("N\n");	
	    printf("%d\n", divisor);
	}
	else
	{
		//se n�o encontrou, ent�o n � primo
		printf("S\n");
	}
	return 0;
}
