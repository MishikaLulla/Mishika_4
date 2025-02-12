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
for(int i=0; i<=4; i++)
{
printf("\n enter rollno:");
scanf("%d", &s[i].rollno);
printf("\n enter name:");
scanf("%s", s[i].name);
printf("\n enter percentage:");
scanf("%f", &s[i].per);
}
for(int j=0; j<=4; j++)
{
printf("\n rollno is : %d", s[j].rollno);
printf("\n name is %s", s[j].name);
printf("\n percentage is: %f", s[j].per);
}
}
