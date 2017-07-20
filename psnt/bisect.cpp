#include<stdio.h>
#include<math.h>
#include<process.h>
#define f(x) x*x*x-x-1

int main()
{
	int i;
	float x,y,m;
	for(int i=0 ; ;i++)
	{  if(f(i)<0)
	    {
	    	x=i;
	    	break ; 
		}
	}
	for( ; ; i++)
	{
		if(f(i)>0)
		{
			y=i;
			break ;
		}
	}
	printf(" The two roots are : - %f , %f",x,y);
	i=1 ;
	while((y-x)>0.0001)
	{
		m=(y+x)/2 ;
		if(f(m)>0 )
          {
          	y=m ;
		  }
		  else
		  x=m ;
		  printf("\n root x%d is %f ",i++,m);	
	}
}
