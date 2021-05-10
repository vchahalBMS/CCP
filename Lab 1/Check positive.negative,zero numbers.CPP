#include<stdio.h>
#include<conio.h>
int main()
{
    int A;
    printf("\nEnter the number A:");
    scanf("%d",&A);
    if(A > 0)
       printf("%d is positve.", A);
    else if(A < 0)
       printf("%d is negative.", A);
    else if(A==0)
       printf("%d is zero.", A);
    return 0;
}
