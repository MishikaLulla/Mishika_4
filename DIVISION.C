//program to compute quotient and remainder
#include<stdio.h>
#include<conio.h>
void main()
{
int r,q,n,m;
printf("enter the value of n and m");
scanf("%d%d",&n,&m);
r=n/m;
q=n%m;
printf("\nremainder is %d",r);
printf("\nquotient is %d",q);
getch();
}