#include<iostream>
using namespace std;
class bank
{
int balance,withdraw,deposit; 
public:
bank()
{ balance=10000;
}
void todeposit()
{
cout<<endl<<"enter the amount to be deposited";
cin>>deposit;
balance=balance+deposit;
}
void towithdraw()
{
cout<<endl<<"enter the amount to withdraw";
cin>>withdraw;
balance=balance-withdraw;
}
void show()
{
cout<<endl<<"remaining balance "<<balance;
}
};
int main()
{
bank b;
b.todeposit();
b.towithdraw();
b.show();
}
