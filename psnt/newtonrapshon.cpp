#include<stdio.h>
#include<math.h>
#include<process.h>
#define f(x) x*x*x-17
#define g(x) 3*x*x

int main()
{
	double x;
	printf("Enter the value of x0\n");
	scanf("%lf",&x);
	int i=1 ;
	while(1)
	{
		double m=f(x) ;
		double n=g(x) ;
		double temp=x ;
		x = x-(m/n);
		double temp1=x ;
		if(temp>temp1)
		{
			if((temp-temp1)<0.00001)
			    break ;
		}
		else if((temp1-temp)<0.00001)
			    break ;
		
		printf("\n roots x%d is %lf",i++,x);
	}
}
