#include<stdio.h>
void main()
{
int a[5];
int i,j,t,n;
printf("\n enter values:");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
j=4;
for(i=0;i<=4;i++)
{
	t=a[i];
	a[i]=a[j];
	a[j]=t;
j--;
}
for(i=0;i<=4;i++)
{
printf("\n a[%d]=%d",i,a[i]);
}
}


