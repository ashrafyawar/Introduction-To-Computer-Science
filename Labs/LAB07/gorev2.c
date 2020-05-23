#include <stdio.h>

int main()
{
	int fact=1, num;

	printf("Num: ");
	scanf("%d", &num);

	if(num == 0 || num==1) {
		printf("1\n");
	} else {
		while(num != 1){
			fact *= num--;
		}
		printf("%d\n", fact);
	}

	return(0);
}
