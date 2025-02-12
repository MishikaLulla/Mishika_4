#include<iostream>
using namespace std;
class Distance
{
private: int k,m;
public: 
Distance()
{
}
Distance(int km, int mt)
{k=km;
  m=mt;
 }
 void show()
 { cout<<endl<<"km="<<k;
   cout<<endl<<"    meter="<<m;
   }
   void add_Distance(Distance d1, Distance d2)
   { cout<<endl<<"km="<<d1.k+d2.k;
     cout<<endl<<"m="<<d1.m+d2.m;
     }
     };
     int main()
     {
      Distance d1(1,200),d2(3,700),d;
      d1.show();
      d2.show();
      d.add_Distance(d1,d2);
      }

