#include<stdio.h>
void main()
{
int a[5],i,max=a[0];
printf("enter the elements of array");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
for(i=0;i<=4;i++)
{
if(max<a[i])
max=a[i];
}
printf("greatest element is %d",max);
}
