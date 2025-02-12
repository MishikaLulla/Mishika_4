#include<stdio.h>
int main()
{
int a[3][3],sum;
for(int i=0;i<3;i++)
{
     for(int j=0;j<3;j++)
     {
     printf("Enter th element:");
     scanf("%d",&a[i][j]);
     
     }
}
for(int i=0;i<1;i++)
{
	sum=0;
     for(int j=0;j<3;j++)
     {
     	sum=sum+a[i][j];
     }
     
       printf("sum is %d",sum);
     
  
}

  printf("\n");

}
         
