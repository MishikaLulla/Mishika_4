#include<iostream>
using namespace std;
class operations
{public:
int num1,num2; 
operations()
{
num1=50;
num2=20;
}
class addition
{
public:
void showa(int a,int b)
{
cout<<endl<<"addition "<<a+b;
}
};
class subtraction
{int a=20,b=10;
public:
void shows()
{
cout<<endl<<"subtraction "<<a-b;
}
};
};
int main()
{
operations op;
operations::addition a;

a.showa(op.num1, op.num2);
operations::subtraction s;
s.shows();
}
