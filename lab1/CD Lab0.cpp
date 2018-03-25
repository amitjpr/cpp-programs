// (0+1)^*
#include <stdio.h>

int main()
{
	char str[20];
	char *p=str;
	gets(str);
	int s=0; // represents state
	while(*p!='\0' && s==0)
	{
		switch(s)
		{
			case 0:
				if(*p=='0'|| *p=='1')
				{
					s=0;
					p++;
				}
				else 
					s=1; // dead state
				break;	
		}
	}
	if(s==0)
		puts("Accepted");
	else 
		puts("Rejected");	
	
	return 0;
}
