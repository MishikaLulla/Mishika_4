#include<stdio.h>
struct employee
{
int code;
char name[20];
char post[20];
};

void main()
{
struct employee E1,E2;

printf("enter code , name and post for first employee");
scanf("%d %s %s",&E1.code,E1.name,E1.post);
printf("enter code , name and post for second student");
scanf("%d %s %s",&E2.code,E2.name,E2.post);

printf("\n code = %d",E1.code);
printf("\n name = %s",E1.name);
printf("\n post = %s",E1.post);
printf("\n ------------------");
printf("\n code = %d",E2.code);
printf("\n name = %s",E2.name);
printf("\n post  = %s",E2.post);
}

