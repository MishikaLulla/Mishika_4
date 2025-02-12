#include <stdio.h>
int main(){
int pin,amount;
char n;
do{
printf("\nPlease insert you ATM card :");
printf("\nEnter your pin of the ATM card:");
scanf("%d",&pin);
printf(" \nEnter amount of you want :" );
scanf("%d",&amount);
printf("\nDo you want to retrive more money please enter (y/n) ");
scanf("%c",&n);
}while(n=='y' ||n=='Y');
}
