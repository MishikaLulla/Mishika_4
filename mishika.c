#include<stdio.h>
void main()
{
float m1,m2,m3,total,per;
printf("enter the marks of 3 subjects");
scanf("%f%f%f",&m1,&m2,&m3);
total=m1+m2+m3;
per=total*100/300;
printf("\n total marks are %f",total);
printf("\n per are %f",per);
}

