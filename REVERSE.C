#include<stdio.h>
#include<conio.h>
void main()
{
int t=0,r,n;
printf("enter n");
scanf("%d",&n);
 while(n!=0)
 {
 r=n%10;
 n=n/10;
 t=t*10+r;
 }
 printf("%d",t);
 getch();
 }