#include<algorithm>
#include<array>
#include<iostream>
using namespace std;
int main(){
 array<int,5> arr={4,5,1,2,3};
cout<<"size of array is"<<endl;
cout<<arr.size()<<endl;
cout<<"\nelements of array";
for(int i:arr)
  cout<<i<<" ";
  
  cout<<"\n square is";
  for(int i:arr)
  cout<<"element:  "<<i<<"   square="<< i*i<<endl;
   
   cout<<"\n even";
    for(int i:arr){
   
    if(i%2==0)
    { cout<<"element"<<i;
    }
    
       
      
}
}
       
       
