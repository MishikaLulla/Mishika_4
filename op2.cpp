#include<iostream>
using namespace std;
class Distance
{
private: int km,mt;
public: Distance()
{
}
Distance(int k, int m)
{ km=k;
   mt=m;
}
void show()
{ cout<<endl<<"km="<<km<<"  m"<<mt;
}

Distance operator+(Distance d2)
{ Distance d;
 d.km=km+d2.km;
 d.mt=mt+d2.mt;
 return d;
 }
};
int main()
{ Distance d1(2,100),d2(3,200),d3;
   d1.show();
   d2.show();
   d3=d1+d2;
   d3.show();
   }
