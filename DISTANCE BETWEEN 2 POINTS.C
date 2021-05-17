#include<stdio.h>																																																																																																																																#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float x,y,x1,y1,x2,y2,distance;
    clrscr();
    printf("Enter point 1 x1,y1\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter the point 2 x2,y2 \n");
    scanf("%f%f",&x2,&y2);
    x=(x2-x1);
    y=(y2-y1);
    distance=sqrt(x*x+y*y);
    printf("Distance=%f",distance);
    getch();
    return 0;
}