#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
string line;
fout.open("yapperme.txt",ios::app);
while(fout)
{cout<<"enter line ";
getline(cin,line);
if(line=="-1")
break;
fout<<line<<endl;
}
cout<<"data saved 👍️";
fout.close();
}
