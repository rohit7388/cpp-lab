#include <iostream>
using namespace std;
class Complex
{
int real;
double imag;
public:
void read(int r,double i)
{
real=r;
imag=i;
}
void disp(){
cout<<"Complex Number is: "<<real<<"+"<<imag<<"i"<<endl;
}
friend Complex Add(int a, Complex c)
{
Complex temp;
temp.real = a + c.real;
temp.imag = c.imag;
return temp;
}
friend Complex Add(Complex c,Complex c1)
{
Complex temp;
temp.real=c.real+c1.real;
temp.imag=c.imag+c1.imag;
return temp;
}
};
int main()
{
Complex C1,C2,C3,C4;
C1.read(1,2.5);
C1.disp();C2.read(2,1.5);
C2.disp();
C3 = Add(2,C1);
C3.disp();
C4 = (C3,C2);
C4.disp();
return 0;
}

