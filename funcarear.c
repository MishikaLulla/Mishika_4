#include<stdio.h>
float circle(float r);
void main()
{
float r,area;
printf("enter radius");
scanf("%f",&r);
area=circle(r);
printf("\n area of circle = %.2f",area);
}
float circle(float r)
{
float ar;
ar=3.14*r*r;
return ar;
}
