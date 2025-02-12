#include<stdio.h>
struct students 
{
int rollno;
char name[20];
float per;
};
struct students s[5];
int main()
{
for(int i=0; i<5; i++)
{
printf("\nEnter %dth rollno:",i+1);
scanf("%d",&s[i].rollno);
printf("\nEnter %dth name:",i+1);
scanf("%s",s[i].name);
printf("\nEnter %dth percentage:",i+1);
scanf("%f",&s[i].per);
}
printf("\nStructure's data is:");
for(int j=0; j<5; j++)
{
printf("\nRollno of %dth is: %d",j+1,s[j].rollno);
printf("\nName of %dth is: %s",j+1,s[j].name);
printf("\nPercentage of %dth is: %f",j+1,s[j].per);
}
}
