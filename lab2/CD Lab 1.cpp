// (a + aa*b)*
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
	char st[20];
	// pointer use
	char *p;
	p=st;
	// without pointer
	int s=0,i=0; // s represents state and i represents index
	printf("Enter String:");
	gets(st); // scanf("%s",&st) or scanf("%s",p) 
	while(*p!='\0') // while(st[i]!='\0')
	{
		switch(s)
		{
			case 0: 
				if(*p=='a')//if(st[i]=='a')
				{
					s=1; // state 1
					i++; // index increment
					p++; // pointer address increment
				}
				else 
				{
					s=2;// dead state
					printf("\nString Rejected\n");
					return 0;
				}
				break;
			
			case 1:
				if(*p=='a')
				{
					s=1; // state 1
					i++; // index increment
					p++; // pointer address increment
				}
				else if(*p=='b')
				{
					s=0;
					i++;
					p++;
				}
				break;
			
			default:
				printf("String Reject.");
				return 0;
										
		}
	}	
	if(*p=='\0')
	 s=1;
	// string empty then it is accepted
	if(s==1 || s==0)
	{
		printf("String accepted.\n");
	}
	//else 
 	//	printf("String Rejected.");
	
}
