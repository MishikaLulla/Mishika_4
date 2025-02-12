#include<stdio.h>
void main()
{
int a[5],i,key;
printf("enter the elements");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
printf("enter the element to be searched");
scanf("%d",&key);
for(i=0;i<=4;i++)
{
if(a[i]==key)
{printf("\nelement found");
break;
}
else
printf("\nelement not found");
}
}
