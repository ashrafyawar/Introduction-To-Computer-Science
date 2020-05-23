#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int i, counter=0, dizi[20];

	for(i=0 ; i<20 ; i++) {
		dizi[i] = rand()%10;
	}

	for(i=0 ; i<20 ; i++) {
		if(dizi[i] == dizi[i+1]+1 || dizi[i]+1 == dizi[i+1]) {
			counter++;
			printf("dizi[%d] = %d & dizi[%d] = %d\n", i, dizi[i], i+1, dizi[i+1]);
		}
	}
	
	printf("There are %d sequential and ordered numbers.", counter);
	
	return 0;
}
