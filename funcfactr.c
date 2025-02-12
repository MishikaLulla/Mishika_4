#include<stdio.h>
int factorial(int n);
void main()
{
int n,f;
printf("enter number");
scanf("%d",&n);
f=factorial(n);
printf("\n factorial = %d",f);
}
int factorial(int n)
{int i,fact=1;
for(i=n;i>=1;i--)
fact=fact*i;
return fact;
}
