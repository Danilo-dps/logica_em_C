#include <stdio.h>

int main(){
	int a, b, i;
	scanf("%d", &a);
	i = 0;
	
	while(i < a){
		b = a * i++;
	}
	printf("%d", b);
}
