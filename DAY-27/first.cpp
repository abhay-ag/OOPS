#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void area() = 0;
};

class Rectangle:public Shape{
    int len, br;
    public:
    Rectangle(int length = 0, int breadth = 0){
        len = length;
        br = breadth;
    }
    void area(){
        cout << "Area Rectangle: " << len * br << endl;
    }
};

class Triangle:public Shape{
    int ba, hei;
    public:
    Triangle(int base = 0, int height = 0){
        ba = base;
        hei = height;
    }
    void area(){
        cout << "Area Triangle: " << 0.5 * ba * hei << endl;
    }
};

class Square:public Shape{
    int side;
    public:
    Square(int side1 = 0)
    {
        side = side1;
    }

    void area(){
        cout << "Area Square: " << side * side << endl;
    }
};

int main(){
    Shape *p;
    Rectangle r(5, 4); Square s(5); Triangle t(2,5);

    p = &r;
    p->area();

    p = &s;
    p->area();

    p = &t; 
    p->area();
    return 0;
}