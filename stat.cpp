#include<iostream>
using namespace std;
class student
{ public:
int roll;
string name;
static int clg_code;
 
 student(int r, string n)
 { roll=r;
    name=n;
    }
    void show()
    { cout<<"     roll"<<roll;
     cout<<"        name"<<name;
     cout<<"      code"<<clg_code;
     cout<<"/////";
     }
     };
     int student::clg_code=1111;
     int main()
     { student s1(101,"anil"),s2(102,"ravi");
       s1.show();
       s2.show();
       }
 
