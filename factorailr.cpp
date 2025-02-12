#include<iostream>
using namespace std;
int main()
{
int fact=1,i,n;
cout<<"enter the number";
cin>>n;
for(i=n;i>=1;i--)
fact=fact*i;
cout<<fact;
}
