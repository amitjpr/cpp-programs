
#include<stdio.h>
#include<graphics.h>
#include<conio.h>


void translateRectangle ( int P[][2], int T[])
{
    int gd , gm, errorcode;

    detectgraph(&gd,&gm);
    initgraph (&gd, &gm, "");
    setcolor (2);
    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);


    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];
    setcolor(3);

    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);

}


int main()
{
     int P[2][2];
    int T[2];
    int a;
    int i ;
    printf("Enter the all 4 co-ordinates\n" );
    for( i=0 ;i<2 ;i++ )
    { for(int j=0 ;j<2;j++)
      {
      scanf("%d",&a);
      P[i][j]=a;
      }
    }
     printf("Enter the translation factor\n" );
    for( i=0 ;i<2 ;i++ )
    {
      scanf("%d",&a);
      T[i]=a;
    }

    translateRectangle (P, T);
    getch();
    return 0 ;
}
