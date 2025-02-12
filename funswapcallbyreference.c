#include<stdio.h>
void swap(int*, int*);
int main()
{
int a,b;
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
printf("\nValue before swap a=%d and b=%d",a,b);
swap(&a,&b);
printf("\nValue after swap a=%d and b=%d",a,b);
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("\nValue in swap x=%d and y=%d",*x,*y);
}
