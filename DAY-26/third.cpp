#include <iostream>
using namespace std;

// polymorphism
/*
    Means: many forms

    Compile Time => Static || can be achieved using function & operator overloading     \\ EARLY BINDING
    Run Time => Dynamic    || can be achieved using Virtual Fuction                     \\ LATE BINDING

    eg: in operator overloading the compiler binds the operator on the basis of definition
*/

class Shape{
     public:
    // void show(){
    //     cout << "Hello" << endl;
    // }
    void draw(){
        cout << "base class draw" << endl;
    }
};

class Rect:public Shape{
    public:
    void draw(){
        cout << "rect class draw" << endl;
    }
};

int main(){
    // pointer objects
    /*
        A obj, *p;

        p = &obj;
        p->show();
    */

    Shape *b;
    Rect r;

    b = &r;         // base class pointer object can have the address of derived class object;
    b->draw();      // irrespective of the value specified in b the result will always be of the draw() function of the base class is executed
    return 0;
}