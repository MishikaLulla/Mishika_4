//program to check wheather a character is a alphabet or not
#include<stdio.h>
#include<conio.h>
void main()
{
char character,A,Z,a,z;
printf("\nenter any character");
scanf("%c",&character);
if(character>='A' && character<='Z' || character>='a' && character<='z')
printf("\ncharacter is an alphabet");
else
printf("\ncharacter is not a alphabet");
getch();
}