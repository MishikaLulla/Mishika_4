#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,size;
printf("enter  the size");
scanf("%d",&size);
for(i=1;i<=size;i++)
{ for(j=1;j <= size - i;j++)
    printf(" ");

  for(k=1;k<= 2 * i-1;k++)
    printf("*");

    printf("\n");
}
 getch();

}