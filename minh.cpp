#include<iostream>
using namespace std;
 class animal
 { public:
  void move()
 { cout<<endl<<"it can move";
 }       
  void sleep()
  { cout<<endl<<"it can sleep";
  }
  };
  class dog:public animal
  { public:
  void bark(){
  cout<<endl<<"it can bark";
  }
  };
  class panda:public animal
  { public:
    void cute()
{    cout<<endl<<"it is cute";
  }
  };
  int main()
  { panda p;
   p.move();
   p.sleep();
   p.cute();
   }  
