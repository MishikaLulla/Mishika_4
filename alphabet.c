#include<stdio.h>
int main()
{
   int i,j,n;
   
   printf("Enter the number of rows : ");
   scanf("%d",&n);
   printf("\n");
   for(int i =n;i>0;i--)
   {
    for(int j=i;j>0;j--)
    {
        printf("*");

    }
    printf("\n");

   }

    return 0;

}