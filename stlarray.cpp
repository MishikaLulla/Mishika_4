#include<algorithm>
#include<array>
#include<iostream>
using namespace std;
int main()
{
array<int,5>a={2,7,6,4,9};
cout<<"size of array is"<<endl;
cout<<a.size()<<endl;
cout<<"\n elements of array";
for(int i:a)
cout<<i<<' ';
cout<<"\n square is";
for(int i:a)
cout<<"square="<<i*i<<endl;
for(int i:a)
if(i%2==0)
{
cout<<"even"<<i+i<<endl;
}
}
