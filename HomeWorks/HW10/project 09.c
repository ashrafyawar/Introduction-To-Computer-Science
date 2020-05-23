// a program to print the sum of two vectores.                                          
#include <stdio.h>
int main(){

	int v1[20],v2[20],v3[20];
	int i = 0,j = 1,v1Norm = 0,v2Norm = 0;
	int v1lenght = 0, v2lenght = 0;
	double point = 0,cos = 0;
	
	// select a random number
	for (i = 0; i < 30; ++i){
		
		v1[i] = j%5;v2[i] = j%7;
		j+ = 8;
	}

	//print the vector one
	printf("v1 : ");

	for (i = 0; i < 20; ++i)
		printf("%d,",v1[i] );
		printf("\n");

    // print the vector two
	printf("v2 : ");
	for (i = 0; i < 20; ++i)
		printf("%d,",v2[i] );
	printf("\n");

	for (i = 0; i < 20; ++i){
		if(v1[i] != 0)
			v1Norm++;
	}

	printf("v1 L0 norm : %d\n",v1Norm);

    //  calculate the normal  of  the vector one.
	for (i = 0; i < 20; ++i){
		
		if(v2[i] != 0)
			v2Norm++;
	}

	printf("v2 L0 norm : %d\n",v2Norm);

	// place the sumof the two veectores to another variable.
	for(i=0; i < 20; ++i)
		v3[i] = v1[i] + v2[i];
	printf("v1 + v2 : ");               // print the sum of the two vectores.
	
		for (i = 0; i < 20; ++i)
			printf("%d,",v3[i] );
			printf("\n");

	for (i = 0; i < 20; ++i){	
		v1lenght += (v1[i] * v1[i]);
		v2lenght += (v2[i] * v2[i]);
	}
    
    //sum the vectores of the same indexes.
	for (i = 0; i < 20; ++i)
		point += v1[i] * v2[i];

	cos = point / ( v1lenght * v2lenght);
	printf("sim(v1,v2) : %lf\n", cos);

	return 1;
}
