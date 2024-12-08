
#include <iostream>
using namespace std;
class Time
{
int Hr,Hr1,min,min1;
public:
void read()
{
cout<<"Enter time1: ";
cin>>Hr>>min;
cout<<"Enter time2: ";
cin>>Hr1>>min1;
}
void AddTime()
{
int h=Hr+Hr1;
int m=min+min1;
if(m>=60)
{
h=h+1;
m=m-60;
}
if(h>12)
{
h=h-12;
}
cout<<"Added Time is: "<<h<<":"<<m;
}
};
int main()
{
Time T;
T.read();
T.AddTime();
return 0;
}
