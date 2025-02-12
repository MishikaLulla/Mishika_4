#include<stdio.h>
int main()
{
int i,sume=0,sumo=0;
for(i=1; i<=10; i++)
{
if(i%2==0)
{
sume=sume+i;
printf("\n%d even",i);
}
else
{
sumo=sumo+i;
printf("\n%d odd",i);
}
}
printf("\nSum of even is:%d",sume);
printf("\nSum of odd is:%d",sumo);
}
