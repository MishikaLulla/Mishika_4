#include<stdio.h>
void table(int n);
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
table(n);
}
void table(int n)
{
int t,i;
for(i=1;i<=10;i++)
{t=i*n;
printf("\n %d",t);
}
}
