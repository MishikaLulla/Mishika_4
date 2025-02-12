#include<iostream>
using namespace std;
class person{
public:
	int age;
	char name;
	void getdetails(){
		cout<<"enter the id";
		cin>>age;
		cout<<"enter the name";
		cin>>name;
	}
	void disdetails(){
		cout<<"age"<<age<<"\n";
		cout<<"name"<<name<<"\n";
	}
};
int main(){
	person s;
	s.getdetails();
	s.disdetails();


}