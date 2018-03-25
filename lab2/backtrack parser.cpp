#include <stdio.h>

int s=0;
char str[20];
char*p=str;
int A()
{
	if(*p=='a')
	{
		p++;
		s=2;
		if(*p=='b')
		{
			s=3;
			p++;
		}
		else 
		{
			p++;
			s=4;
		}
	}
	else 
	{
		p++;
		s=4;
	}
	return s;
}
int C()
{
	if(*p=='k')
	{
		p++;
		s=5;
		if(*p=='b')
		{
			s=3;
			p++;
		}
		else 
		{
			p++;
			s=4;
		}
	}
	else 
	{
		p++;
		s=4;
	}
	return s;
}
int main()
{
	char *t=str;
	puts("Enter String:");
	gets(str);
	while(*p!='\0')
	{
		switch(s)
		{
			case 0:
				if(*p=='a')
				{
					p++;
					t=p;
					s=1;
					s=A();
					p++;
					if(s!=3)
						{
						p=t;
						s=C();
						p++;
						}
				}	
				else 
				{
					p++;
					s=4;
				}
				break;
			case 3 || 4:
				if(*p=='a'|| *p == 'b' || *p=='k')
					s=4;
				break;
						
			default:
				s=4;
			break;	
		}
	}
	if(s!=3)
		puts("Rejected");
	else 
		puts("Accepted");
return 0;	
}
