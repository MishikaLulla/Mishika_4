#include<stdio.h>
void dispaly(struct students s2);
struct students
{
int rollno;
char name[20];
float per;
};
struct students s1;
int main()
{
printf("\nenter rollno:");
scanf("%d",&s1.rollno);
printf("\nenter name:");
scanf("%s",s1.name);
printf("\nenter percentage:");
scanf("%f",&s1.per);
display(s1);
}
void display(struct students s2)
{
printf("\nrollno is:%d",s2.rollno);
printf("\nname is:%s",s2.name);
printf("\npercentage is:%f",s2.per);
}
