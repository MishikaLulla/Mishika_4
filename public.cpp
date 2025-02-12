#include<iostream>
using namespace std;
class first 
{ public: int a;
 private: int b;
 protected: int c;
 };
 class second : public first
 { public: int x;
             void setter()
             {c=30; 
              y=200;
              z=300;
             }
  void show()
  { cout<<endl<<x;
  cout<<endl<<y;
  cout<<endl<<z;
  cout<<endl<<a;
  cout<<endl<<c;
  }
  private: int y;
  protected: int z;
  };
  int main()
  { second obj;
  obj.a=10;
  obj.x=100;
  obj.setter();
  obj.show();
  }
