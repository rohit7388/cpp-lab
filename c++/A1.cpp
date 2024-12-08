#include <iostream>
using namespace std;
class Bank
{
char name[10];
int balance;
int accno;
public:
void read(){
cout<<"Enter the Name of the customer:";
cin>>name;
cout<<"Enter the accno of the customer:";
cin>>accno;
cout<<"Enter the balance amount:";
cin>>balance;
}
void deposit(){
int amt;
cout<<"Enter the Amount to be deposited:";
cin>>amt;
balance=balance+amt;
cout<<"Available balance is: "<<balance<<endl;
}
void withdraw(){
int amt;
cout<<"Enter the amount to withdraw:";
cin>>amt;
if((balance-amt)<500)
{
cout<<"insufficient balance to withdraw:"<<endl;
}
else
{
balance=balance-amt;
cout<<"Available balance is: "<<balance;
}
}
void display(){
cout<<"Customer name: "<<name<<endl;
cout<<"Customer account number: "<<accno<<endl;
cout<<"Available balance: "<<balance<<endl;
}
};
int main()
{
Bank B;
cout<<"------Read Customer Details------"<<endl;
B.read();
cout<<"------Display Customer Details------"<<endl;
B.display();
cout<<"------Deposit------"<<endl;
B.deposit();
cout<<"------Withdraw------"<<endl;
B.withdraw();
return 0;
}
