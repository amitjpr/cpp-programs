
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
 

void findNewCoordinate(int s[][2], int p[][1])
{
    int temp[2][1] = { 0 };

    for (int i = 0; i < 2; i++)
	for (int j = 0; j < 1; j++)
	    for (int k = 0; k < 2; k++)
		temp[i][j] += (s[i][k] * p[k][j]);

    p[0][0] = temp[0][0];
    p[1][0] = temp[1][0];
}

 void scale(int x[], int y[], int sx, int sy)
{
    // Triangle before Scaling
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);


    int s[2][2] = { sx, 0, 0, sy };
    int p[2][1];


    for (int i = 0; i < 3; i++)
    {
	p[0][0] = x[i];
	p[1][0] = y[i];

	findNewCoordinate(s, p);

	x[i] = p[0][0];
	y[i] = p[1][0];
    }

    // Triangle after Scaling
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}


int main()
{
    int x[3];
    int y[3];
    int a;
    int i ;
    printf("Enter the X co-ordinates\n" );
    for( i=0 ;i<3 ;i++ )
    {
      scanf("%d",&a);
      x[i]=a;
    }
     printf("Enter the Y co-ordinates\n" );
    for( i=0 ;i<3 ;i++ )
    {
      scanf("%d",&a);
      y[i]=a;
    }

   // int x[] = { 100, 200, 300 };
    //int y[] = { 200, 100, 200 };
    //int sx = 2, sy = 2;
    int sx=1,sy=1;
    printf("Enter the Scaling matrix Sx and Sy\n" );
    scanf("%d%d",&sx,&sy);

    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm," ");

    scale(x, y, sx,sy);
    getch();

    return 0;
}
