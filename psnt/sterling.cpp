# include <stdio.h>
# include <math.h>
# include <process.h>
# include <string.h>
//...MAIN EXECUTION THREAD
int main()
{
//...Variable declaration Field
//...Integer Type
int n;
int i,j;
//...Floating Type
float ax[10]; //...array limit 9
float ay[10]; //...array limit 9
float x;
float nr,dr;
float y=0; //...Initial value 0
float h;
float p;
float diff[20][20]; //...array limit 19,19
float y1,y2,y3,y4;
//...Invoke Function Clear Screen
//...Input Section
printf("\n Enter the number of terms – ");
scanf("%d",&n);
//...Input Sequel for array X
printf("\n\n Enter the value in the form of x – ");
//...Input loop for Array X
for (i=0;i<n;i++)
{
printf("\n\n Enter the value of x%d – ",i+i);
scanf("%f",&ax[i]);
}
printf("\n\n Enter the value in the form of y – ");
//...Input Loop for Array Y
for(i=0;i<n;i++)
{
printf("\n\n Enter the value of y%d–",i+1);
scanf("%f",&ay[i]);
}
//...Inputting the required value query
printf("\nEnter the value of x for");
printf("\nwhich you want the value of y–");
scanf ("%f",&x);
//... Calculation and Processing Section
h=ax[1]-ax[0];
for(i=0;i<n-1;i++)
{
diff[i][1]=ay[i+1]-ay[i];
}
for(j=2;j<=4;j++)
{
for(i=0;i<n-j;i++)
{
	diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
}
}
i=0;
do {
i++;
}while(ax[i]<x);
i--;
p=(x-ax[i])/h;
y1=p*(diff[i][1]+diff[i-1][1])/2;
y2=p*p*diff[i-1][2]/2;
y3=p*(p*(p-1))*(diff[i-1][3]+diff[i-2][3])/6;
y4=p*p*(p*(p-1))*diff[i-2][4]/24;
//...Taking Sum
y=ay[i]+y1+y2+y3+y4;
//...Output Section
printf("\nwhen x=%6.4f,y=%6.8f ",x,y);
//... Invoke User Watch Halt Function
printf("\n\n\n Press Enter to Exit");

}
