#include<iostream>
using namespace std;
class bank
{ private:
int balance, deposit, withdraw;
public:
bank()
{balance=10000;
}
void amount_dep()
{ cout<<endl<<"enter amout to be deposited";
cin>>deposit;
balance=balance+deposit;
cout<<endl<<"now your balance is"<<balance;
}
void amout_with()
{cout<<endl<<"enter amout to  withdraw";
  cin>>withdraw;
  balance=balance-withdraw;
  cout<<endl<<"now your balance is"<<balance;
  }
  void show_bal()
  {cout<<endl<<"remaining balance="<<balance;
  }
 
};
int main()
{ bank obj;
   obj.amount_dep();
   obj.amout_with();
   obj.show_bal();
   }
   
