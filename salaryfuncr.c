#include<stdio.h>
void increment(int *salary)
{ 
 *salary=*salary+5000;
}
void main()
{ 
int salary;
printf("enter your salary");
scanf("%d",&salary);
printf("\n your salary is %d", salary);
increment(&salary);
printf("\n now, your salary is %d",salary);
}
