// ((a+b)*(c+d)*)^+
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[20];
	char *p=str;
	puts("Enter String: ");
	gets(str);
	int s=0;
	while(*p!='\0')
	{
		switch(s)
		{
			case 0:
				{
					if(*p=='a' || *p=='b' || *p=='c' || *p=='d')
						{
							p++;
							s=0;// accept state
						}
					else 
					{
						s=1;// dead state
						p++;
					}	
				}
				break;
			default:
			 	break;	
		}
	}
	if(s==0)
		puts("Accept");
	else
			puts("Reject");
	return 0;
}
