// (a + aa*b)^+
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
			//if 1 a then accept
				case 0:
					if(*p=='a')
					{
						s=1;
						p++;
					}// if strt is b then reject
					else if(*p == 'b')
					{
						s=3; // reject state or dead state
					}		
					break;
				case 1://continuous string of a or a single b is accepted
					if(*p=='a'){
						s=1;
						p++;
					}
					else if( *p== 'b')
					{
						s=2;
						p++;
					}
					break;
				case 2://if 1 more b is received then reject and if a received then move to another state
					if(*p == 'a')
					{
						s=1;
						p++;
					}
					else if( *p=='b')
					{
						s=3; //  dead state or reject state
					}
					break;
				default:
					break;					
		}
	}	
	if(s==1 || s==2)
			printf("String accepted.\n");
	else 
 		printf("String Rejected.");
	
	return 0;
}
