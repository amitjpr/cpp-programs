//accept ( ab*c + (def)^+ + a*d^+e )^+
#include<stdio.h>
#include<strings.h>

int main()
{
	char *p;
	char str[20];
	puts("Enter String:");
	gets(str);
	p=str;
	int s=0; //state
	while(*p != '\0')
	{
		switch(s)
		{
			case 0:
				{
					if(*p=='a')
					{
						s=1;
						p++;
					}
					else if(*p=='d')
					{
						s=4;
						p++;
					}
					else
					{
						s=8;// dead state
					}
				}
				break;
			case 1:
				{
					if(*p=='b')
					{
						s=2;
						p++;
					}
					else if(*p=='c')
					{
						s=3; // accept
						p++;
					}
					else if(*p=='a')
					{
						s=5;
						p++;
					}
					else if(*p=='d')
					{
						s=4;
						p++;
					}
					else
					{
						s=8;
						p++;
					}
				}
				break ;
				case 2:
					{
						if(*p=='b')
						{
							s=2;
							p++;
						}
						else if(*p=='c')
						{
							s=3;
							p++;
						}
						else
						{
							s=8;
							p++;
						}
					}
					break;
				case 3:
					{
						if(*p=='d')
						{
							s=4;
							p++;
						}
						else if(*p=='a')
						{
							s=1;
							p++;
						}
						else 
						{
							p++;
							s=8;
						}
					}
					break;
				case 4:
					{
						if(*p=='d')
						{
							s=4;
							p++;
						}
						else if(*p=='a')
						{
							s=5;
							p++;
						}
						else if(*p=='e')
						{
							s=6;// accept
							p++;
						}
						else 
						{
							s=8;
							p++;
						}
					}
					break;
				case 5:
					{
						if(*p=='a')
						{
							s=5;
							p++;
						}
						else if(*p=='b')
						{
							s=2;
							p++;
						}
						else if(*p=='d')
						{
							s=4;
							p++;
						}
						else 
						{
							s=8;
							p++;
						}
					}
					break;
				case 6:
					{
						if(*p=='a')
						{
							s=5;
							p++;
						}
						else if(*p=='f')
						{
							s=7;// accept
							p++;
						}
						else if(*p=='d')
						{
							s=4;
							p++;
						}
						else 
						{
							s=8;
							p++;
						}
					}
					break;
				case 7:
					{
						if(*p=='a')
						{
							s=5;
							p++;
						}
						else if(*p=='d')
						{
							s=4;
							p++;
						}
						else 
						{
							s=8;
							p++;
						}
					}
					break;
				case 8:
					{
						puts("Reject");
						return 0;
					}						
					
		}
		
	}
	if(s==3 || s==6 || s==7)
	{
		puts("Accept");
		return 0;
	}
	else
	{
		puts("Reject");
		return 0;
	}
}
