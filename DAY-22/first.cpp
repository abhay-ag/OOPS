/*
    Constructor 
        1. Default Arguments
        2. Dynamic 
*/

#include <iostream>
using namespace std;

class Complex{
    int real, imag;

    public:

    // works for 0 paramters, 1 parameter, 2 parameters.
    Complex(int i = 0, int j = 0){
        real = i;
        imag = j;
    }

    // Copy Constructor

    Complex(const Complex &obj){
        real = obj.real;
        imag = obj.imag;
    }

    void disp() const{
        cout << real << " + " << imag << "i" << endl;
    }
};

// dynamic memory --> memory allocated at runtime

// allocated using "new" keyword
// deallocated using "delete" keyboard

/*
    declaring dynamic memory

    int *p;
    p = new int;
*/


class Example{
    int *p;

    public:

    Example(){      // dynamic constructor
        p = new int;
    }

    void set(){
        *p = 10;
    }
    void disp(){
        cout << *p << " is stored at " << p << endl;
    }
};

int main() {
    // default arguements are optional, and are always declared at the last after all required arguments are declared.

    Complex c1, c2(5), c3(5,10);        // overloading

    c1.disp();      // 0 + 0i
    c2.disp();      // 5 + 0i
    c3.disp();      // 5 + 10i

    // two ways to call a copy constructor
    Complex c4 = c3;            // Copy constructor FIRST WAY
    Complex c5(c2);             // Copy constructor SECOND WAY

    c4.disp();
    c5.disp();

    Example e1;

    e1.set();
    e1.disp();
    return 0;
}