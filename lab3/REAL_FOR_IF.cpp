#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int i=0,j=0,s=0,c=0;
	char str[20];
	printf("enter the character string for FOR,IF,ID,REALNO. \n");
	gets(str);
	
	//int c=str[0];
	//printf("%d",c);just for test 
	
	while(i<=strlen(str))
	{
		c=str[i];
	//printf("%d",h);test purpose
		switch(s){
		
				case 0: 
						if(str[i]=='f'){
						i++;s=1;}
						else if(str[i]=='i'){
						i++;s=5;}
						else if(isalpha(c)){
						i++;s=8;}
						else if(isdigit(c)){
						i++;s=10;}
						else 
							s=-1;
						break;
						
				case 1: if(str[i]=='o'){
						i++;s=2;}
						else if(isalnum(c)){
						i++;s=8;}
						else 
							s=-1;
						break;
						
				case 2:	if(str[i]=='r'){
						i++;s=3;}
						else if(isalnum(c)){
						i++;s=8;}
						else 
							s=-1;
						break;
				
				case 3: if(str[i]=='\0'){
							printf(" \n\nFOR\n\n");
							i++;		
						}
						else if(isalnum(c)){
						i++;s=8;}
						else 
							s=-1;
						break;		
				
				//case 4: 
						//printf(" FOR");
						//	break;		
				
				case 5:	if(str[i]=='f'){
						i++;s=6;}
						else if(isalnum(c)){
						i++;s=8;}
						else 
							s=-1;
						break;	
				
				case 6:	if(str[i]=='\0'){
						i++;printf(" \n\nIF\n\n");}
						else if(isalnum(c)){
						i++;s=8;}
						else 
							s=-1;
						break;	
				
				//case 7: 
					//	printf(" IF");
				//			break;	
							
				case 8:	if(isalnum(c)){
						i++;s=8;}
						else if(str[i]=='\0'){
						i++;printf(" \n\nIDENTIFIER\n\n");}
						else 
							s=-1;
						break;	
					
					
				//case 9: 
				//		printf(" identifier");
					//		break;
							
				case 10:	
						if(isdigit(c)){
						i++;s=10;}
						else if(str[i]=='.'){
						i++;s=11;}
						else 
							s=-1;
						break;	
					
			
				case 11:	
						if(isdigit(c)){
						i++;s=11;}
						else if(str[i]=='\0'){
						i++;printf(" \n\nIS A REAL NO.\n\n");}
						else 
							s=-1;
						break;	
				
				//case 12: 
					//	printf(" is a real no");
					//		break;
			}
			
		if(s==-1){
			printf("string rejected");
			break;
		}
			
	}

	if(str[i]=='\0')
		printf("string accepted");
	getch();
	return 0;
}
