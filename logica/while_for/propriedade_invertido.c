#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x, y, i;
	scanf("%d%d", &x, &y);
	i = x + 1;
	while(i <= y && i % 10 != 0){
		printf("%d\n", i);
		i++;
	}
}
