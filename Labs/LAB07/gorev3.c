#include <stdio.h>

int main()
{
	float sum, num, i;
	num = 0;
	sum = 0;
	i = 0;
	while(num != -1){
		sum += num;
		printf("Num: ");
		scanf("%f", &num);
		i++;
	}
	printf("Sum: %f Avg: %f\n", sum, sum/i);
	return(0);
}