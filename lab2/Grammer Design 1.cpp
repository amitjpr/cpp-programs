// S-> aA\aCb; A->ab; C->k
// accepts aab or akb
// s=4 is dead state; s=3 is accepted state; s=0 is start state
#include <stdio.h>

int s=0;
char str[20];
char *p=str;
//p=str;
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
		s=5; // ak
		if(*p=='b')
		{
			s=3; //akb
			p++;
		}
		else
		{
			s=4; // dead state
			p++; // ak_ underscore means any other char than b
		}
	}
	else
	{
		s=4;// dead state
		p++;
	}
	return s;
}

int main()
{
	char *t=str; // used to save current value of pointer p
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
					s=4; // dead state
				}
			break;
			default:
				s=4; // dead state
			break;
		}
	}
	
	
	
	if(s!=3)
	{
		puts("Rejected.");	
	}
	else
	{
		puts("Accepted.");
	}
	
	return 0;
}
