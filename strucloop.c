#include<stdio.h>
struct students 
{
int rollno;
char name[20];
float per;
};
struct students s[3];
int main()
{
for(int i=0;i<3;i++)
{
printf("\nenter rollno:");
scanf("%d",&s[i].rollno);
printf("\nenter name:");
scanf("%s",s[i].name);
printf("\nenter percentage:");
scanf("%f",&s[i].per);
}
for(int j=0;j<3;j++)
{
printf("\nrollno is:%d",s[j].rollno);
printf("\nname is:%s",s[j].name);
printf("\npercentage is:%f",s[j].per);
}
}
