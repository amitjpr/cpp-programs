#include<stdio.h>
#include<math.h>
#include<process.h>
#define f(x) x*x*x - 5*x +1

int main()
{
	double x,y;
	printf("Enter the roots for the following \n ");
	scanf("%lf  %lf",&x,&y);
	int j ; 
	printf("\n Enter no. of iterations \n ");
	scanf("%d",&j);
	double m ; 
	int i=2 ;
	double positive,negative ;
	double a1=f(x);
	double b1=f(y);
	if (a1<b1)
	{
		negative= x;
		positive=y;
	}
	else 
	{
		positive=x ;
		negative=y ;
	}
	while(1)
	{   
	    
		double a=f(x);
	    double b=f(y);
		m= y -((y - x)*b/(b-a));
		double c= f(m);
		y=m ;
		
		if(c<0)
		{
			x=positive ;
		}
		else 
		x=negative ;
		if(i==j)
		{
			break ;
		}
	     
		printf("\nroots  x%d is :  %lf",i++,m);
	}
}
