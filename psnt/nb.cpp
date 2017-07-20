#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
 
int main()
{
int n;           
int i,j,k;
float mx[10],my[10];          
float x,h,x0=0,fun=0,p;                                         
float y0,sum=0,diff[20][20];                           
float y1,y2,y3,y4;          
 

printf("\n\n Enter the values of x you want to enter -> ");
scanf("%d",&n);
 
printf("\n\n Enter the value in the form of x : ");
for(i=0;i<n;i++)
   {
   printf("\n Enter the value of x[%d] : ",i+1);
   scanf("%f",&mx[i]);
   }
 
printf("\n\n Enter the value in the form of y : ");
for(i=0;i<n;i++)
   {
   printf("\n Enter the value of y[%d] : ",i+1);
   scanf("%f",&my[i]);
   }
 
printf("\n\n Enter the value of x for which u want the value of y : ");
scanf("%f",&x);
 
// Calculation and processing section.
h=mx[1]-mx[0];
for(i=0;i<n-1;i++)
   diff[i][1]=my[i+1]-my[i];
 
for(j=2;j<=4;j++)
   for(i=0;i<n-j;i++)
      diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
i=0;
 
while(!mx[i]>x)
     i++;
 
x0=mx[i];
sum=0;
 
y0=my[i];
fun=1;
 
p=(x-x0)/h;
sum=y0;
 
for(k=1;k<=4;k++)
   {
   fun=(fun*(p-(k-1)))/k;
   sum=sum+fun*diff[i][k];
   }
 
// Output
printf("\n When x = %6.4f , y = %6.8f\n\n",x,sum);
getch();
system("pause");
}

