#include<stdio.h>
int main(){
	
	int x,i,sum=0,sum1=0;// in here we will declare the things we will use it
	printf("inter the number to find its friendly number\n");// in here we will ask user for a number to find its friendly number
	scanf("%d",&x);// user will put a number here
		
	for ( i = 1;i <x ;++i){
		if(x % i==0)
			sum=sum+i;
	}
	for(i = 1;i<sum;++i){
		if (sum%i==0)//applying if condition
			sum1=sum1+i;
	}
		if (x==sum1)
			printf("%d is your friendly number\n",sum );
		else
			printf("%d has no friendly number",x );
	return 0;
}
