#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int i, dizi[25], evenNumber=2;

	for(i=0 ; i<25 ; i++) {
		dizi[i] = evenNumber;
		evenNumber = evenNumber + 2;
		printf("%d ", dizi[i]);
	}

	return 0;
}
