#include<stdio.h>
int main(){
int x,y,z;
printf("\n enter values:");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z){
printf("\n x is greatest value:%d",x);
}
else{ if (y>x&&y>z){
printf("\n y is greatest value:%d",y);
}
else
{printf("\n z is greatest value:%d",z);
}
}
}
