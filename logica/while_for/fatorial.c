#include <stdio.h>

int main(){
	int a, b, i;
	scanf("%d", &a);
	i = 0;
	
	while(i < a){
		i++;
		b = i * i;
	}
	printf("%d", b);
}
