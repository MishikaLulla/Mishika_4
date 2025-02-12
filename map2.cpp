#include<iostream>
using namespace std;
#include<map>
int main()
{
map<int,string> students={{101,"rolly"},{102,"mishika"},{103,"siddhi"}};
int roll;
cout<<"enter roll number";
cin>>roll;
cout<<endl<<"student name is"<<students[roll];
}
