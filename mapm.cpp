#include<iostream>
using namespace std;
 #include<map>
 int main()
 {
  map<int,string> student={{101,"mishika"},{102,"rolly"},{103,"siddhi"}};
  int roll;
  cout<<endl<<"enter roll number";
  cin>>roll;
  cout<<"student details"<<student[roll];
  }
  
