#include <iostream>

using namespace std;

/*
    Cosntant member functions:
*/

class Counter{
    int count;

    public:
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

    Counter c1;

    c1.set();
    c1.inc();
    c1.display();
    return 0;
}