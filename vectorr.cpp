#include<iostream>
using namespace std;
#include<vector>
int main()
{vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
cout<<"printing vector values";
for(int i:v)
cout<<i<<" ";
cout<<endl;
v.pop_back();
cout<<"printing vector values";
for(int i:v)
cout<<i<<" ";

}
