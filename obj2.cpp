#include<iostream>
using namespace std;
class Distance
{ private: int k,m;
public: Distance()
{
}
Distance(int km,int mt)
{ k=km;
  m=mt;
  }
  void show()
  { cout<<endl<<"km="<<k<<"  meter"<<m;
  
    
  }
  Distance sum_Distance(Distance d1, Distance d2)
  { Distance d;
   d.k=d1.k+d2.k;
   d.m=d1.m+d2.m;
   d.k=d.k+(d.m/1000);
   d.m=d.m%1000;
  
   return d;
   }
   };
   int main()
   { Distance d1(5,900),d2(2,100),d;
    d1.show();
    d2.show();
    d=d.sum_Distance(d1,d2);
    d.show();
    }
