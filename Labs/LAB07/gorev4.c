#include <stdio.h>

int main()
{
	int i, j, num;
	printf("Num: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		for(j = i+1; j < num; j++){
			printf(" ");
		}
		for(j = 0; j < num; j++){
			printf("*");
		}
		printf("\n");
	}
	return(0);
}