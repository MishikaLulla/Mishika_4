#include<iostream>
using namespace std;
int main()
{
int r,n,sum;
cout<<"enter the number";
cin>>n;
while(n!=0)
{
r=n%10;
sum+=r*r*r;
n=n/10;
}
cout<<n;
}
