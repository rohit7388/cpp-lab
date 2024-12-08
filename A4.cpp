#include <iostream>
using namespace std;
class Employee
{
int Eno;
char Ename[10];
int salary;
public:
void read() {
cout<<"Enter the Employee number:";
cin>>Eno;
cout<<"Enter the employee name:";
cin>>Ename;cout<<"Enter the employee salary:";
cin>>salary;
}
void print() {
cout<<"Employee Number:"<<Eno<<endl;
cout<<"Employee Name:"<<Ename<<endl;
cout<<"Employee Salary:"<<salary<<endl;
}
};
int main()
{
int n;
cout<<"Enter the number of employee:";
cin>>n;
Employee E[n];
cout<<"Enter The Empolyee Details"<<endl;
for(int i=0; i<n; i++)
{
cout<<"--------Enter Employee "<<i+1<<" Details--------"<<endl;
E[i].read();
}
cout<<"Employee Details Are"<<endl;
for(int i=0; i<n; i++)
{
cout<<"--------Employee "<<i+1<<" Details--------"<<endl;
E[i].print();
}
return 0;
}
