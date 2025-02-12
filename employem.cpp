#include<iostream>
using namespace std;
class employee
{
  private:
     string name;
     string post;
     float salary;
     float comm;
   public:
    void inputdata()
    {cout<<"enter details";
    cin>>name>>post>>salary>>comm;
    }
    void outputdata()
    {
       cout<<endl<<name;
       cout<<endl<<post;
       cout<<endl<<salary+comm;
       }
       
     };
     int main()
     {
     employee e;
     e.inputdata();
     e.outputdata();
     }
     
     
       
