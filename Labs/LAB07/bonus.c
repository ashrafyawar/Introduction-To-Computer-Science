#include <stdio.h>

int main()
{
	int i, j, num;
	printf("Num: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++){
		for(j = 0; j < (num-i); j++){
			printf(" ");
		}
		for(j = 0; j < (2*i - 1); j++){
			printf("*");
		}
		printf("\n");
	}
	return(0);
}