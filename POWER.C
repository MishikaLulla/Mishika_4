//calculate the power
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,p=1;
printf("enter the number and power");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
p=p*a;
printf("answer is %d",p);
getch();
}