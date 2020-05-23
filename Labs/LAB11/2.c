#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int i, deger[30], toplam[29];

	printf("Degerler Dizisi: ");
	for(i=0 ; i<30 ; i++) {
		deger[i] = rand()%10;
		printf("%d ", deger[i]);
	}

	printf("\nToplam Dizisi:\n");

	for(i=0 ; i<29 ; i++) {
		toplam[i] = deger[i] + deger[i+1];
		printf("%d + %d = %d\n", deger[i], deger[i+1], toplam[i]);
	}

	return 0;
}
