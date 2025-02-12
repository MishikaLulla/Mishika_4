#include<stdio.h>
void main()
{
int a[5];
int i,j,t;
printf("\n enter values:");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
	for(j=0;j<4;j++)
	{
	if(a[j]>a[j+1])
	{
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
	}	
	}
}
for(i=0;i<=4;i++)
{
printf("\n a[%d]=%d",i,a[i]);
}
}
