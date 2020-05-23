#include<stdio.h>
	int main()
{
	int a;
		printf("put and integer:");
		scanf("%d",&a);
	while(1)
	{
		if(a=0)
		{
			printf("%d is your max!",a);
		break;
		}
		else if(a<0)
		return 0;			
		{
		printf("your entiger is negative");
		}
		else(a>0)
		{
		printf("your number is positive");
		}		
}
	return 0;
