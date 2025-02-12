#include<iostream>
using namespace std;

class Teacher{
    public:
    int empID;
    string Name;
    int Salary;
    int Join_Date;

    void input(){
        cout<<"Enter employee ID:";
        cin>>empID;

        cout<<"Enter employee name:";
        cin>>Name;

        cout<<"Enter employee salary:";
        cin>>Salary;

        cout<<"Enter Date of Joining:";
        cin>>Join_Date;
    }

    void show(){
        cout<<"Employee ID is"<<empID<<endl;
        cout<<"Name of Teacher is"<<Name<<endl;
        cout<<"Salary of Teacher is"<<Salary<<endl;
        cout<<"Joinig date of Teacher is"<<Join_Date<<endl;
    }
};

int main(){
    Teacher T1;
    T1.input();
    T1.show();

    return 0;
}