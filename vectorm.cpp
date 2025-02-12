#include<iostream>
using namespace std;
#include<vector>

int main()
{
vector<int>vect;
vect.push_back(1);
vect.push_back(2);
vect.push_back(3);
 cout<<"printing vector values";
 for(int ele:vect)
 cout<<ele<<" ";
 cout<<endl;
 //vector pop_back();
 vect.clear();
 cout<<"printing pop back values";
 vect.clear();
 for(int ele:vect)
 cout<<ele<<" ";
 }
