#include<stdio.h>

int main(){
    int a=10;

    int p=&a;

    printf("value of a=%d \n",a);
    printf("value of a=%d using variable of pointer \n", *p);

    printf("address of a=%d \n", &a);
    printf("value of p=%p \n", &p);
    printf("address of p=%p \n", &p);
    
}
