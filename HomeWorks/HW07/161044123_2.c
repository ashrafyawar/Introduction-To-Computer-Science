#include <stdio.h>
#include <stdlib.h>

int main(){
 	
 	int  choice = 2,i, j,rows,spaces,stars;
 	while(choice > 0){
		printf("___MENU___\n");
		printf("1.Draw diamond\n");
		printf("2.Student id\n");
		printf("0.Exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

	 	switch(choice){
        	case 1:{
           		printf("For height h3\n");
            	rows = 2;stars = 1;spaces = rows - 1;
       			for(i=1; i<rows*2; i++){
			        for(j=1; j<=spaces; j++)
			        printf(" ");
			        for(j=1; j<stars*2; j++)
			        	printf("*");
			        	printf("\n");
			        	if(i < rows)
			           		spaces--;stars++;
			        	else
			            	spaces++;stars--;
    			}
			}
			
	printf("For height h5\n");
{
	rows=3;
            stars = 1;
            spaces = rows - 1;
        for(i=1; i<rows*2; i++)
    {
        for(j=1; j<=spaces; j++)
        printf(" ");
        for(j=1; j<stars*2; j++)
        printf("*");

        printf("\n");
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
}
        break;
	case 2: printf (" name:mohammad ashraf\n surname:yawar\n student id:161044123\n");
        break;
    }
    }
}
    return 0;

}















