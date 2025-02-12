#include<stdio.h>
int main(){
int num,a,b,reversedNum;
printf("Enter Number to reverse: ");
scanf("%d",&num);
a=num%10;
b=num/10;
reversedNum=(a*10)+b;
printf("Reversed num is:  %d",reversedNum);
}
