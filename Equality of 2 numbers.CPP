#include<stdio.h>
#include<conio.h>
void main()
{
		int a,b;
		clrscr();
		printf("Input the values for Number 1 and Number 2");
		scanf("%d,%d",&a,&b);
		if(a==b)
		printf("Number 1 and number 2 are equal\n");
		else
		printf("Number 1 and number 2 are not equal\n");
		getch();
}