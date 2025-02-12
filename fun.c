#include<stdio.h>
int add(){
int a,b,c;
printf("\n Enter two  no");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n addition is %d",c);
}
int sub(){
int a,b,c;
printf("\n Enter two  no");
scanf("%d%d",&a,&b);
c=a-b;
printf("\n subtraction is %d",c);
}
int mul(){
int a,b,c;
printf("\n Enter two  no");
scanf("%d%d",&a,&b);
c=a*b;
printf("\n multiplication is %d",c);
}
int div(){
int a,b,c;
printf("\n Enter two  no");
scanf("%d%d",&a,&b);
c=a/b;
printf("\n division is %d",c);
}
int main(){
int op;
char ch;
printf("\nenter 1 for add\nenter 2 for substraction \nenter 3 for multiplication\nenter 4 for division ");
scanf("%d",&op);
do{
if(op==1){
	add();
	}
	else{
	if(op==2){
		sub();
		}
		else{
		if(op==3){
			mul();
			}
			else{
			if(op==4){
				div();
				}
				else{
				printf("wrong no. please enter valid no.");
				}
		}
	}
}
while (ch=='y'|| ch=='Y');
}













