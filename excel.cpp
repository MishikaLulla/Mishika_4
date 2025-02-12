#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   int roll;
   string name;
   fout.open("data1.xls",ios::app);
   cout<<"enter roll number and name";
   cin>>roll>>name;
   fout<<roll<<"\t"<<name;
   }
