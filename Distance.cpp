#include<iostream>
using namespace std;
class Distance
{
  private:int km,mt;
  
  public:
  Distance(int km,int mt)
  {
   this->km=km;
   this->mt=mt;
   }
     Distance()
     {
     }
     void show_distance()
     {
     cout<<endl<<"km:"<<km;
     cout<<endl<<"mt:"<<mt;
     cout<<endl<<".................";
     }
     void sum distance(Distance d1,Distance d2)
     { 
      cout<<endl"KM:"<<d1.km+d2.km;
      cout<<endl"MT:"<<d1.mt+d2.mt;
      }
};
 int main()
 {
  DistanceD1(10,200),D2(5,300),D3;
  D1.show_distance();
  D2.show_distance();
  D3.sum_distance(D1,D2);
  }
