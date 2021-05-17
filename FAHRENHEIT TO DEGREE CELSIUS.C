#include<stdio.h>
#include<conio.h>																																																																																																																																#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    clrscr();
    printf("\nEnter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(5.0/9) * (fahrenheit-32);
    printf("%.2f Fahrenheit=%.2f Celsius",fahrenheit,celsius);
    getch();
    return 0;
}