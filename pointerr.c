#include<stdio.h>
void main()
{
int a=50;
int *p;
p=&a;
printf("\n value of a is %d",a);
printf("\n value of a by pointer is %d",*p);
printf("\n address of a is %u",&a);
printf("\n value of pointer is %u",p);
}
