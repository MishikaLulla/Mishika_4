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
    { cout<<endl<<"roll"<<roll;
     cout<<endl<<" name"<<name;
     cout<<endl<<" code"<<clg_code;
     cout<<endl<<"--------";
     }
     };
     int student::clg_code=1111;
     int main()
     { student s1(101,"  nishi"),s2(102,"  ravi"),s3(103,"  sam");
       s1.show();
       s2.show();
       s3.show();
       }
