#include<stdio.h> 
void main(){
int name[5]; 
int length ,i,j,temp;

for(i = 0; i<5; i++){
scanf("%d",&name[i]);
}
for(i=0; i<5; i++){
for(j=0; j<5; j++){
if(name[j]>name[j+1]){
temp = name[j];
name[j] = name[j+1];
name[j+1] = temp;
}
}
}
for(i=0; i<5; i++){
printf("%d ",name[i]);
}


}
