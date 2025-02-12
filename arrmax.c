#include<stdio.h>
int main()
{
int i=0,j=4,k,temp=0;
int arr[5];
 
for(k=0;k<5;k++)
{
printf("\n Enter %dth element ",i);
scanf("%d",&arr[k]);
}
for(i=0;i<j;i++)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
j--;
}
for (k=0;k<5;k++)
{
printf("\n a[%d]=%d",k,arr[k]);
}
}


