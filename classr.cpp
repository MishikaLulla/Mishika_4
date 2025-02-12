#include<iostream>
using namespace std;

class employee
{
string name;
string post;
float salary;
float comm;

public:
void input()
{
cout<<"enter name,post,salary and commision";
cin>>name>>post>>salary>>comm;
}
void output()
{
cout<<endl<<name;
cout<<endl<<post;
cout<<endl<<salary+comm;
}
};
int main()
{
employee e;
e.input();
e.output();
}
