#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int i, dizi[10];
	
	for(i=0 ; i<10 ; i++) {
		dizi[i] = rand() % 10;
		printf("%d ", dizi[i]);
	}
	
	printf("\n");
	
	for(i=4 ; i<7 ; i++)
	{
		printf("dizi[%d] = %d\n", i, dizi[i]);
	}

	return 0;
}
