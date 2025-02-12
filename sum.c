#include <stdio.h>
void main()
{
     int n,sum=0,first,last;
     printf("Enter any number to find sum of first digit and last digit:");
     scanf("%d",&n);
     last=n%10;
     first=n;
     while(num>=10)
     {
         n=n/10;
     }
     first=n;
     sum=first+last;
     printf("sum of first and last digit =%d",sum);
}
