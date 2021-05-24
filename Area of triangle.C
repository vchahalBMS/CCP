#include<stdio.h>
#include<math.h>
double area_of_triangle(double,double,double);
int main()
{
    double a,b,c,area;
    printf("\nEnter the lengths of triangle");
    scanf("%lf%lf%lf",&a,&b,&c);
    area=area_of_triangle(a,b,c);
    printf("Area of triangle=%.2lf\n",area);
    return 0;
}
double area_of_triangle(double a,double b,double c)
{
       double s,area;
       s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
       return area;
}