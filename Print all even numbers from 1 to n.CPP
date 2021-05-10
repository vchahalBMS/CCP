#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    clrscr();
    int n;
    number=1;
    printf("Enter the value of N;");
    scanf("%d",&n);
    printf("Even numbers from 1 to %d:\n",n);
    while(number<=n)
    {
	 if (number%2==0)
		 printf("%d",number);
	 number++;
    }
    getch();
    return 0;
}