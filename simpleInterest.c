#include <stdio.h>
int main(){
int p,r,t,si;
printf("Enter Principle, Rate and Time: ");
scanf("%d%d%d",&p,&r,&t);
si=p*r*t/100;
printf("\nSimple Interest is: %d",si);
}
