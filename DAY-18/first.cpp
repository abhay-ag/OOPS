#include <iostream>

using namespace std;

// Constant Member Fucnctions Contd.:

class Counter{
    int count;

    public: 

    Counter(){          // constructor is to be made to avoid all the constant class member discrepancies
        count = 0;
    }
        void set(){
            count = 0;
        }
        void inc(){
            count ++;
        }
        void display() const{
            // count += 2;      throws an error
            cout << count;
        }
};

int main(){
    Counter c1;         // non constant member can access all types of functions.

    c1.set();
    c1.inc();
    c1.inc();
    c1.display();

    const Counter c2;   // constant members can access only constant member functions.

    // c2.set();
    // c2.inc();
    c2.display();


    return 0;
}