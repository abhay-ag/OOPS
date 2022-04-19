#include <iostream>
using namespace std;

class Complex{
    int real, imag;

    public:
    friend Complex sum(Complex, Complex);

    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(int r, int i){
        real = r;
        imag = i;
    }

    Complex add(Complex ob1){
        Complex c1;

        c1.real = real + ob1.real;
        c1.imag = imag + ob1.imag;

        return c1;
    }

    void disp() const{
        cout << real << "+" << imag << "i" << endl;
    }
};

Complex sum(Complex ob1, Complex ob2){
    Complex c3;

    c3.real = ob1.real + ob2.real;
    c3.imag = ob1.imag + ob2.imag;

    return c3;
}

int main() {

    Complex c1(5,7), c2(7,10), c3;

    c3 = sum(c1, c2);       // using friend function

    c1.disp();
    c2.disp();
    c3.disp();

    c1 = c1.add(c2);        // without friend function
    c1.disp();

    return 0;
}