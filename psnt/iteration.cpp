#include<stdio.h>
#include<math.h>
#include<process.h>
#define f(x) 2*x-x-1

int main()
{
	double x,y;
	printf("Enter the roots for the following\n");
	scanf("%lf  %lf",&x,&y);
	double iter ;
	double a1 =f(x);
	double b1=f(y);
	if(a1 < 0 )
	{
		iter =x ;
	}
	else 
	iter =y ;
   int i=1 ;
    while(1)
	{   
		iter=f(iter);
		printf("\nthe root x%d is %lf\n",i++,iter);
		if(i==8)
		break ;
	}	
}
	
