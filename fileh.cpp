#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream fin;
string line;
fin.open("yapping.txt",ios::app);
while(getline(fin,line))
{
   cout<<line<<endl;
   }

fin.close();
}
