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

    void disp() const{
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // default arguements are optional, and are always declared at the last after all required arguments are declared.

    Complex c1, c2(5), c3(5,10);        // overloading

    c1.disp();      // 0 + 0i
    c2.disp();      // 5 + 0i
    c3.disp();      // 5 + 10i

    return 0;
}