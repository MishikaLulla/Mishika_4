#include<iostream>
using namespace std;
class employee
{
public:
string name;
int id;
static string dept;
employee(string n,int i)
{name=n;
id=i;
}
void show1()
{
cout<<endl<<"NAME :"<<name;
cout<<endl<<"ID :"<<id;
show2();
}
static void show2()
{
cout<<endl<<"DEPARTMENT :"<<dept;
cout<<endl<<"===========";
}
};
string employee::dept="marketing";
int main()
{
employee e("anil",100);
e.show1();
}
