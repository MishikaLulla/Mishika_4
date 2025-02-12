//function overloading
#include<iostream>
using namespace std;
void area(double r)
{ cout<<endl<<"area of circle is"<<3.14*r*r;
}
void area(int l,int b)
{cout<<endl<<"area of rectangle is"<<l*b;
}
void area(int a)
{
cout<<endl<<"area of square is"<<a*a;
}
void area(double b,double h)
{ cout<<endl<<"area of triangle is"<<0.5*b*h;
}

int main()
{
area (1.0);
area(1,2);
area(1);
area(1.2,1.1);
}

