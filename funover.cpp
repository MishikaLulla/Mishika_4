#include<iostream>
using namespace std;
int area(int side)
{
return side*side;
}
int area(int l,int b)
{
return l*b;
}
int area(int l,int b, int h)
{
return l*b*h;
}
int main()
{
cout<<endl<<"Area of square is:"<<area(3);
cout<<endl<<"Area of reactangle is:"<<area(2,4);
cout<<endl<<"Area of cuboid is:"<<area(2,3,4);
}
