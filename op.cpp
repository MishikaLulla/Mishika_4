#include<iostream>
using namespace std;
class number
{ private: int x,y,z;
   public: number()
   {x=10;
   y=20;
   z=30;
   }
   void show()
   { cout<<endl<<"  x"<<x<<"  y"<<y<<"  z"<<z;
   }
   void operator++(int)
   {++x;
    ++y;
    ++z;
   }
   };
   int main()
   { number N;
     N.show();
     N++;
     N.show();
     }
