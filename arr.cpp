#include<iostream>
using namespace std;
class rectangle
{ int l,b;
public:
void input()
{ cout<<endl<<"enter l and b";
 cin>>l>>b;
}
void output()
{ cout<<endl<<"area="<<l*b;

  }
  };
  int main()
  { rectangle r[3];
  for(int i=0;i<=2;i++)
  r[i].input();
  for(int j=0;j<=2;j++)
  r[j].output();
  }
