#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdlib.h>
char input[10];
int i,error;
void S();
void A();
void B();
void C();
main()
{
	i=0;
	error=0;
	printf("enter the expression:");
	gets(input);
	S();

	if( error==0)
	{
		printf("\nC->c\n");
		printf("\nAccepted");
	}
	else
		printf("\nRejected");
//	getch();
}
void S()
{
	printf("\nS->ABC");
	A();
	if(input[i]=='b')
	{
		printf("\nB->b\n");
		i++;
		C();
    }
    else
    {
    //	if(error==0)
	  //  	printf("\nB->BC");
    	//B();
	}
    //error=1;	
}
void A()
{
	if(input[i]=='a' && input[i+1]=='b')
	{
		i+=2;
		if(input[i]=='b')
			{
				i++;
				printf("\nA->ab\n");
				B();
			}
		else
			{
			printf("\nA->abA\n");
			A();
			}
    }
	else
		error=1;
	
}
void B()
{
	if(input[i]=='c')
	{
		printf("\nB->b\n");
		C();
	}
	else
	{
		error=1;
	}
}
void C()
{
	if(input[i]=='c')
	{
		printf("\nC->cC\n");
		i++;
		if(input[i+1]!='\0')
			C();
	}
	else if(input[i]=='\0')
	{
		printf("\nC->c\n");
		error=0;
	}
	else
		error=1;
	
}

