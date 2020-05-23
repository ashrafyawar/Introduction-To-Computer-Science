#include<stdio.h>
int main(){
	
	int fahrenheit;
	float celcius;
	
	printf("Lutfen fahrenheit degerini giriniz:\n");
	scanf("%d", &fahrenheit);
	
	celcius = (fahrenheit - 32) * 5.0 / 9;
	
	printf("Celcius degeri: %f\n", celcius);
	
	return 0;
}