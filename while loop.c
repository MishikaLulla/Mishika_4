#include<stdio.h>
void main()
{
int n,r,t=0;
printf("enter number");
scanf("%d",&n);

while(n!=0)
{
r=n%10;
n=n/10;
t=t*10+r;
}
printf("reverse of given number is %d",t);
}
