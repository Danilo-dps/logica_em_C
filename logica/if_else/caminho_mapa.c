#include <stdio.h>
#include <locale.h>

int main()
{
		setlocale (LC_ALL, "Portuguese");
	int caminho;
	scanf("%d", &caminho);
	if(caminho == 1)
	{
		scanf("%d", &caminho);
		if(caminho == 4)
		{
			scanf("%d", &caminho);
			if(caminho == 6)
			{
				printf("Caminho v�lido\nDestino alcan�ado\n");
			}	
			else
			{
				printf("Caminho inv�lido\n");
			}
		}
		else
		{
			printf("Caminho inv�lido\n");
		}
	}	
	else if(caminho == 2)
	{
		printf("Caminho v�lido, mas o destino n�o foi alcan�ado");
	}
	else if(caminho == 3)
	{
		scanf("%d", &caminho);
		if(caminho == 5)
		{
			scanf("%d", &caminho);
			if(caminho == 7)
			{
				scanf("%d", &caminho);
				if(caminho == 8)
				{
					printf("Caminho v�lido\nDestino alcan�ado\n");
				}
			    else
				{ 
			    	printf("Caminho inv�lido\n");
				}
			}
			else
			{
				printf("Caminho inv�lido\n");
			}
				
		}
		else
		{
			printf("Caminho inv�lido\n");
		}
		
	}
	else
	{
	    printf("Caminho inv�lido\n");
    }
	return 0;
}
