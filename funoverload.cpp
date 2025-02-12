#include<iostream>
using namespace std;
void area(int l,int b)
{
cout<<endl<<"area of rectangle:"<<l*b;
}
void area(int a)
{
cout<<endl<<"area of square:"<<a*a;
}
void area(double h,double b)
{
cout<<endl<<"area of triangle:"<<0.5*b*h;
}
void area(double r)
{
cout<<endl<<"area od circle:"<<3.14*r*r;
}
int main()
{
area(4,5);
area(3);
area(2.0,6.0);
area(1.0);
}
