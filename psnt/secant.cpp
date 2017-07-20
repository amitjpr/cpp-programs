#include<stdio.h>
#include<math.h>
#include<process.h>
#define f(x) x*x*x - 5*x +1

int main()
{
	double x,y;
	printf("Enter the roots for the following");
	scanf("%lf  %lf",&x,&y);
	double m ; 
	int i=2 ;
	while(1)
	{   double a= f(x);
	    double b=f(y);
		m= y -((y - x)*b/(b-a));
		x=y ;
		y=m ;
		
		
		 if(b>a)
		 {
		 	if((b-a)<0.0001)
		 	{
		 		break;
			 }
		}
		else if(a>b)
		{
			if((a-b)<0.0001)
		 	{
		 		break;
			 }
		}
		printf("\nroots  x%d is :  %lf",i++,m);
	}
}
