#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
     char s[100];
     clrscr();
     printf("\nEnter a string:");
     scanf("%[^\n]",s);
     printf("\nin lowercase:");
     puts(strlwr(s));
     getch();
    return 0;
}
