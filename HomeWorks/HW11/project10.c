#include <stdio.h>
#include <time.h>
#include <stdlib.h>

                                               //we use rand function to use random quantity of chocolates.
int chocolates(int total[6]);
void printchocolates(int chocolates[6]); 
void who_has_eaten(int total[6], int speed_of_ayse, int speed_of_mehmet);// these are all diclaration part.

int main(){

	int totalchocolates[6];
	int speed_of_mehmet,speed_of_ayse=1;
	speed_of_mehmet = speed_of_ayse * 2; // because speed of mehmet is two times faster than ayse.
    
    //first of all we made the arrayes of chocolates here.
	chocolates(totalchocolates);
  	who_has_eaten(totalchocolates,speed_of_ayse , speed_of_mehmet);	
	
	return 1;// if it is true so return one .
}
void who_has_eaten(int totalchocolates[6], int speed_of_ayse, int speed_of_mehmet){//the eating rate of ayse will start from one.
	
	int total = 0,i = 0,j = 5;
	int rate_of_mehmet = 0,rate_of_ayse = 0;   
	int eaten_by_mehmet = 0,eaten_by_ayse  = 0;
                                    
	for(i = 0; i < 6; ++i)
		total += totalchocolates[i];

	for(i = 0,j = 5; 0 <= total; total -= 3){
		
		totalchocolates[i] -= speed_of_mehmet;
		rate_of_mehmet += speed_of_mehmet;
		totalchocolates[j] -= speed_of_ayse;
		eaten_by_ayse = eaten_by_ayse + speed_of_ayse;

		if(totalchocolates[i] == -1){
			i++;
			totalchocolates[i]--;
		}
		
		// if a chcolate has finished eh or she will start to second one.
		if(totalchocolates[i] == 0)
			i++;
		if(totalchocolates[j] == 0){
			eaten_by_ayse++;//the total amount of ayse will increase here
			j--;
		}
		if(i == j)
			j++;
	}

	i++;
	eaten_by_mehmet = i;
	printf("mehmet: %d \nayse: %d\n",eaten_by_mehmet,eaten_by_ayse );
	printf("the winner is :  ");
	
	if(eaten_by_ayse < eaten_by_mehmet)
		printf("mehmet\n");

	else if(eaten_by_ayse > eaten_by_mehmet)
		printf("ayse\n");

	else if(eaten_by_ayse == eaten_by_mehmet)
		printf("the game is went to all!\n");
}

int chocolates(int total[6]){
	
	int i=0;
	srand(time(NULL));// we use the random number's functions here
	
	for(i = 0; i < 6; ++i){
		
		total[i] = rand()%12;
		if(total[i] == 0)
			i--;
	}
	printchocolates(total);
}
void printchocolates(int chocolates[6]){
	//print the sizes of the chocolates.
	
	int i;
	for(i = 0; i < 6; ++i)
		printf("%d ",chocolates[i]);
	printf("\n");	
}