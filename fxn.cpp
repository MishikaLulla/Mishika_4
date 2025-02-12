#include<iostream>
using namespace std;
class box
{ private: int l,b;
 public: box(int ln,int bt)
  { l=ln;
     b=bt;
   }
   void show(box obj)
   { cout<<endl<<"l="<<obj.l;
    cout<<endl<<"b="<<obj.b;
    }
    };
    int main()
    { box b1(10,20), b2(30,70);
       b1.show(b2);
      }
     
