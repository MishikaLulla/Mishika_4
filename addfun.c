#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("\nenter two numbers");
scanf("%d%d",&a,&b);
printf("\nvalues before swap a=%d and b=%d",a,b);
swap(&a,&b);
printf("\nvalues after swap a=%d and b=%d",a,b);
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("\nvalues in swap function *x=%d and *y=%d",*x,*y);
}
