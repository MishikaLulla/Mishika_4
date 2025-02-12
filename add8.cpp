#include<iostream>
using namespace std;
int main()
{ 
   int m1,m2,m3,sumofmark;
   float per;
   cout<<"enter the mark of 3 subject";
   cin>>m1>>m2>>m3;
   sumofmark=m1+m2+m3;
   per=(float(sumofmark)*100)/300;
   cout<<endl<<"total mark obtained;"<<sumofmark;
   cout<<endl<<"percentage:"<<per;
}   
