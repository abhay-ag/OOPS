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

    Complex c1(5);

    c1.disp();
    return 0;
}