#include <stdio.h>
int main(){
	
	//we put zero to of current speed.
	int current_speed = 0,target_speed = 0; 

	printf("Enter Your Current Speed :\n");
	scanf("%d",&current_speed);
	
	//now we have taken the current speed from the user
	printf("Enter Your Target Speed :\n");
	scanf("%d",&target_speed);
	
	//here we take the target speed form the user.	
	printf("Current Speed : %d\n",current_speed);
	printf("Target Speed:%d\n",target_speed); 
	printf("Initializing Test...\n");

	//we print here the values that are user has putten it.
	if(current_speed < target_speed){
		while(current_speed <= target_speed){
		printf("Current Speed : %d\n", current_speed);
		current_speed = current_speed+1;
		}	
	}
	else if(current_speed > target_speed){
		printf("Your Current Speed Is Higher Than Target Value!\n");			
	}
	return 0;
}