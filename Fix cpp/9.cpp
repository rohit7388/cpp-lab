#include<iostream>

using namespace std;

class Shape
{
public:
    int x,y;

    void read()
    {
        cout<<"Enter the values for x and y: ";
        cin>>x>>y;
        cout<<endl;
    }

    virtual void display()=0;
};

class Triangle:public Shape
{
public:

    void display() override
    {
        cout<<"The area of triangle is: "<<0.5*x*y<<endl;
        cout<<endl;
    }
};

class Rectangle:public Shape
{
public:

    void display() override
    {
        cout<<"The area of rectangle is: "<<x*y<<endl;
        cout<<endl;
    }
};

int main()
{
    int ch;

    while(true)
    {
        cout<<"Enter your choice: "<<endl;
        cout<<"1-->Triangle\n2--->Rectangle\n3--->Exit"<<endl;
        cin>>ch;
        Shape* shapeptr=nullptr;

        switch(ch)
        {
            case 1:shapeptr=new Triangle();
            break;

            case 2:shapeptr=new Rectangle();
            break;

            case 3:cout<<"Exiting..."<<endl;
            exit(0);

            default:cout<<"Invalid option"<<endl;
            continue;
        }

        shapeptr->read();
        shapeptr->display();
        delete shapeptr;
    }

    return 0;
}
