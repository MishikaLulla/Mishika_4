#include<iostream>
using namespace std;
class number
{ private: int x,y,z;
   public: number()
   {x=2;
   y=3;
   z=40;
   }
   void show()
   { cout<<endl<<"  x"<<x<<"  y"<<y<<"  z"<<z;
   }
   void operator *()
   {x=x*x;
    y=y*y;
    z=z*z;
   }
   };
   int main()
   { number N;
     N.show();
     *N;
     N.show();
     }
