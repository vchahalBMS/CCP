#include <stdio.h>
int main()
{
  int num1, num2, num3;
  void average_of_numbers(int a, int b, int c);

  printf("Enter three Numbers: ");
  scanf("%d %d %d",&num1, &num2, &num3);
  average_of_numbers(num1, num2, num3);
  return 0;
}
void average_of_numbers(int a, int b, int c)
{
  float s,avg;

  s = a + b + c;

  avg = s / 3.0;

  printf("Average=%.2f\n",avg );
}
