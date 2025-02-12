#include<stdio.h>
int main(){
int arr[5],temp;
for(int i=0;i<5;i++)
{
printf("enter %d th no",i+1);
scanf("%d",&arr[i]);
}
for(int j=0;j<5;j++)
{
for(int k=0;k<5;k++)
{
temp=arr[j];
arr[j]=arr[k];
arr[k]=temp;
}
}
for(int u=0;u<5;u++)
{
printf("\n%d",arr[u]);
}
}
