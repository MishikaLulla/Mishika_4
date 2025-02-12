#include<stdio.h>
int main()
{
int a[5], i , j, k, sum=0;
for(i=0; i<5; i++)
{
printf("\n enter the %dth element of array:", i+1);
scanf("%d", &a[i]);
}
for(k=0; k<5; k++)
{
sum = sum+a[k];
}
for(j=0; j<5; j++)
{
printf("%dth element of array is:%d \n", j+1, a[j]);
}
printf("\n sum of the element is: %d", sum);
}
