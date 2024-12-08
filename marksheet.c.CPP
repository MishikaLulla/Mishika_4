//program for marksheet
#include<stdio.h>
#include<conio.h>
void main()
{
float m1,m2,m3,total,percentage;
printf("enter the marks of three subjects");
scanf("%f%f%f",&m1,&m2,&m3);
total=m1+m2+m3;
percentage=(total*100)/300;
printf("\ntotal=%f",total);
printf("\npercentage=%f",percentage);
getch();
}