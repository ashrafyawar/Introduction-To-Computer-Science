#include<stdio.h>
//the function which have been used in this project
int factorial(int n);
double pow(double s,int n);
double sin(double s);

int main(){
    
    int digree = 0;
            
    printf("please inter the digree here:\n");
    scanf("%d",&digree);
    printf("%d the sin of the digree is: %.2f \n",digree, sin(digree*3.14/180));

    return 0;
}
/* this function will calculate the factorial of the given integer.*/
int factorial(int n){
    int i=1;
    double f = 1.0;
    
    for(i=1; i<= n; i++)
        f = f * i;
    
    return f;
}

//the function power is the same as the function pow in the library stdio.h.
double pow(double s, int x){
  
    double num = 1;
    int i = 1;
    for(i = 1; i <= x; i++)
        num *=s;

    return num;
 }
 // this is the function which will be finding the sin of a digree in taylor series.
double sin(double s){

    int i = 0;
    double temp =0.0, px=0.0, fac=0.0;
    for (i = 0; i <= 30;i++){
        int p;
        p = pow(-1,i);//here minus one to n
        px = pow(s,2*i+1);
        fac = factorial(2*i+1);//(2n+1)
        temp += p* px /fac;
    }
    return temp;
}
