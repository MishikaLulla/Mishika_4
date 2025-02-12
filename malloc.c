#include<stdio.h>
#include<stdlib.h>
int main (){
    char* ptr;
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("entered number of elements:%d",n);

    ptr=(char*)malloc(n*sizeof(char));
    
    if(ptr==NULL){
        printf("memory not allocated.\n");
        exit(0);
    }
    else{
        printf("memory successfully allocated using malloc.\n");
        for(int i=0; i<n;++i){
            printf("enter the elements in array[%d]\n",i);
            scanf("%s",&ptr[i]);
        }
        printf("the elements of the array are; ");
        for(int i=0;i<n;++i){
            printf("%c",ptr[i]);
        }
        free(ptr);
    }
}