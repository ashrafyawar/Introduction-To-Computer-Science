#include<stdio.h>
	int main()
{
	int n,i,j;
	int a=-1;

		while(1)
			{
			printf("please inter an integer:");
		    scanf("%d",&n);
		for(i=1;i<=n; i++)
            {
			for(j=1;j<=i; j++)
			{
				printf("*");
			}
			printf("\n");
			}
		if (n==-1)
		{
			return 0;
		}
		else if(n<a)
		{
			printf("error\n");
		}
	    } 
}				

