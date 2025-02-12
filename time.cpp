#include<iostream>
using namespace std;
class time
{ private:
   int hr,min;
   public: time()
   {
   }
   time(int h, int m)
   { hr=h;
     min=m;
     }
     void show()
     {cout<<endl<<"hour="<<hr<<"   min="<<min;
     }
     time sum_time(time t1, time t2)
     { time t;
        t.hr=t1.hr+t2.hr;
        t.min=t1.min+t2.min;
         
          return t;
   }
   };
   int main()
   { time t1(5,20),t2(2,10),t;
    t1.show();
    t2.show();
    t=t.sum_time(t1,t2);
     t.show();
     }
 
