// String begin with capital and end with fullstop.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	puts("Enter String");
	gets(str);
	int i=0; // counter for string length
	int value = strlen(str); // length of string
	//char *value=str; // 
	int s=0;// start state

		while(str[i]!='\0')
		{
			switch(s)
			{
				case 0: // capital letter encountered
						if(str[i]>=65 && str[i]<=90)
						{
							s=1;
					//		i++;
						}else
						{
							s=3;
					
							puts("Reject");
							return 0;
						}
							printf("0, %d \n", s);
						i++;
					break;
				case 1:
						if(str[i]==46)
							{
								s=2; //accept 
							//	i++;
							}
						else 
							{
								s=1;
							//	i++;
							}
							printf("1, %d \n", s);
							i++;
						break;
				case 2:
					//++i;
					printf("2, %d \n", s);
						if(str[i]!='\0')
						{
							puts("Reject");
							return 0;
							}		
					break;	
				
				case 3:
					puts("Reject");
					break;			
				default: 
					break;
			}
		}
		if(s==2)
			puts("Accept");
		else  // empty string
			puts("Reject");
	
	
	
	return 0;
}
