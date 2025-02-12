#include<stdio.h>
void main()
{ int i,j;
int a[3][3];
printf("enter the elements of 2D array");
 for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d",&a[i][j]);
   
printf("elements of 2D array- \n");
  for(i=0;i<=2;i++)
{  for(j=0;j<=2;j++)
    if(j>=i)
     printf("%d ",a[i][j]);
   else
     printf("  ");
  printf("\n");
}
}
   
