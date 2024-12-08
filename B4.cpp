#include <iostream>
using namespace std;
class Shape {
protected: double x, y;
public:
void get_data() {
cout << "Enter the values for x and y: ";
cin >> x >> y;
}
// Pure virtual function
virtual void display_area() = 0;};
class Triangle : public Shape {
public:
void display_area() override {
cout << "The area of the triangle is: " << 0.5 * x * y << endl;
}
};
class Rectangle : public Shape {
public:
void display_area() override {
cout << "The area of the rectangle is: " << x * y << endl;
}
};
int main()
{
int ch;
char c;
do {
cout << "Choose a shape to calculate area:\n";
cout << "1. Triangle\n";
cout << "2. Rectangle\n";
cout << "Enter your choice (1 or 2): ";
cin >> ch;
Shape* shapePtr = nullptr;
switch (ch) {
case 1: shapePtr = new Triangle();
break;
case 2: shapePtr = new Rectangle();
break;
default: cout << "Invalid choice!" << endl;
continue;
}
shapePtr->get_data();
shapePtr->display_area();
delete shapePtr;
cout << "Do you want to calculate another area? (y/n): ";
cin >> c;
} while (c == 'y' || c == 'Y');
return 0;
}
