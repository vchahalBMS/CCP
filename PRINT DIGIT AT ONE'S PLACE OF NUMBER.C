#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit;
    clrscr();
    printf("\nEnter a number:");
    scanf("%d",&num);
    digit=num%10;
    printf("Last digit : %d",digit);
    getch();
    return 0;
}