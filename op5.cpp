#include<iostream>
using namespace std;
class number
{ private: int x,y,z;
   public: number()
   {x=2;
   y=8;
   z=40;
   }
   void show()
   { cout<<endl<<"  x"<<x<<"  y"<<y<<"  z"<<z;
   }
   void operator %()
   {x=x/2;
    y=y/2;
    z=z/2;
   }
   };
   int main()
   { number N;
     N.show();
     %N;
     N.show();
     }
