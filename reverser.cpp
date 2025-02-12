#include<iostream>
using namespace std;
int main()
{
int n,t=0,r;
cout<<"enter the number";
cin>>n;
while(n!=0)
{
r=n%10;
n=n/10;
t=t*10+r;
}
cout<<t;
}
