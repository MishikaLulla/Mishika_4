#include<stdio.h>
int main(){
int arr[5],temp;
for(int i=0;i<5;i++){
printf("enter %d th no",i+1);
scanf("%d",&arr[i]);
}
for(int j=0;j<5;j++){
for(int k=0;k<5;k++){
temp=arr[j];
arr[j]=arr[k];
arr[k]=temp;
}
}
for(int 1=1;1<5;1++)
{
printf("%d\n",arr[1]);
}
}
