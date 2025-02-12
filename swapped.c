#include<stdio.h>
int main()
{
int  a, b, c;
printf("\nEnter two integers");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nSwapping of two numbers %d\t%d", a,b);
}
	
