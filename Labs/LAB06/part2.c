#include <stdio.h>

int main()
{
	int num1, num2, change;

	printf("\nEnter The First Number:\t");
	scanf("%d", &num1);

	printf("\nEnter Second Number:t");
	scanf("%d", &num2);
    change = num1;
	num1 = num2;
	num2 = change;

	printf("\nThe Swapped Values are:\n");
	printf("First Number = %d and Second Number = %d\n", num1, num2);
	
	return 0;
}
