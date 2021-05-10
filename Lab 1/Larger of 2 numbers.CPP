#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("\nEnter two integers:");
    scanf("%d,%d",&num1,&num2);
    if(num1>num2)
{
    printf("Larger number is %d",num1);
}
    else
{
    printf("Larger number is %d",num2);
}
return 0;
}
