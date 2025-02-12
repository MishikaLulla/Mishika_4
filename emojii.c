#include<stdio.h>
void main()
{
int mood;
printf("\nhow are you feeling?");
printf("\n1 for happy \n2 for sad \n3 for angry \n4 for loved");
scanf("%d",&mood);

switch(mood)
{ case 1: printf("\n🤣️😋️😆️");
    break;
    case 2: printf("\n🙂️😔️😓️");
    break;
    case 3: printf("\n☺️😡️🤬️");
    break;
    case 4: printf("\n😍️🤗️💓️");
    break;
    default: printf("you have mood swings disorder");
    }
    }

