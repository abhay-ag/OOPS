#include <iostream>

using namespace std;

/*
    Cosntant member functions:
*/

class Counter{
    int count;

    public:
    Counter(){
        cout << "I am constructor";
        count = 0;
    }
    void set(){
        count = 0;
    }
    void inc(){
        count ++;
    }
    void display() const /*const*/{
        // count += 2;         // prob: display function should not be able to increase the value of count
        cout << count;      // sol: make the function constant hence it will not be able to change the value of any of the data member.
    }
};

int main(){
    // Constant member;

    const int x = 10;
    // x = x+10;        throws an error

    const Counter c1;

    // c1.set();
    // c1.inc();
    c1.display();

    Counter c2;

    c2.set();
    c2.inc();
    c2.display();

    /*
        Constant object:

            const Counter c2;

            Here:
            1. set() and inc() both are non constant functions and display() is a constant function.
            
            Hence, through a constant object we can call only constant functions.

        Normal object:

            Counter c1;

            Hence, through a normal object all types of functions and data members can be called.
    */
    return 0;
}