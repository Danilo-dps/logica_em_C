#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

		setlocale (LC_ALL, "Portuguese");
		
    int n1, n2, n3, n4;
    
    printf("Insira o primeiro n�mero:\n");
    scanf("%d", &n1);
    
    printf("Insira o segundo valor:\n");
    scanf("%d", &n2);
    
    n3 = (n1/n2);
    n4 = (n1%n2);
    
    printf("O quociente �: %d\n", n3);
    printf("O resto �: %d\n", n4);
    
	return 0;

}
