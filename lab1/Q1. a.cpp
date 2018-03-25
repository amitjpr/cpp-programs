//(0+1)*
#include <stdio.h>
int main()
{
	int s=0;
	char str[20];
	gets(str);
	char *p=str;
	
	while(*p !='\0' && s==0)
	{
		switch(s)
		{
			case 0:
				if(*p=='0' || *p=='1')
					{	
					s=0;
					p++;
					}
				else
					s=1;
			break;			
				
		}
	}
	if(s==0)
	puts("Accepted");
	else 
	puts("Rejected");
	
return 0;	
}
