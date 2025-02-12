#include<iostream>
using namespace std;
int main()
{
int price,discount,total;
cout<<endl<<"enter the price";
cin>>price;
if(price>=1000)
{
cout<<endl<<"discount is 20%";
discount=(price*20)/100;
cout<<endl<<discount;
total=price-discount;
cout<<endl<<total;
}
else
{
cout<<endl<<"discount is 10%";
discount=(price*10)/100;
cout<<endl<<discount;
total=price-discount;
cout<<endl<<total;
}
}
