#include <iostream>
using namespace std;
// Base Class || Abstract Class
class Shape{
    public:
    // pure virtual function
    virtual void area() = 0;
};

// Rectangle class inherits shape class
class Rectangle:public Shape{
    int len, br;
    public:
    Rectangle(int length = 0, int breadth = 0){
        len = length;
        br = breadth;
    }
    // area function
    void area(){
        cout << "Area Rectangle: " << len * br << endl;
    }
};

// Triangle class inherits shape class
class Triangle:public Shape{
    int ba, hei;
    public:
    Triangle(int base = 0, int height = 0){
        ba = base;
        hei = height;
    }
    // area function
    void area(){
        cout << "Area Triangle: " << 0.5 * ba * hei << endl;
    }
};

// Square class inherits shape class
class Square:public Shape{
    int side;
    public:
    Square(int side1 = 0)
    {
        side = side1;
    }
    // area function
    void area(){
        cout << "Area Square: " << side * side << endl;
    }
};

int main(){
    Shape *p;       // pointer object of base class created
    Rectangle r(5, 4); Square s(5); Triangle t(2,5);        // objects created

    p = &r;     // p points to area() of rectangle
    p->area();

    p = &s;     // p points to area() of square
    p->area();

    p = &t;     // p points to area() of triangle
    p->area();
    return 0;
}