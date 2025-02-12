#include<stdio.h>
void square(int n);
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
square(n);
}
void square(int n)
{
int sq;
sq=n*n;
printf("square of given number is %d",sq);
}
