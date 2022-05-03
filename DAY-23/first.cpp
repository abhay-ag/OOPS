#include <iostream>
using namespace std;

// operator overloading
class Counter{
    int count;

    public:
    // constructor
    Counter(){
        count = 0;
    }
    // member functions
    void inc(){
        count++;
    }
    void dec(){
        count--;
    }
    void show() const{
        cout << "Counter: " << count << endl;
    }
};

int main(){
    // object creation
    Counter c1, c2;
    c1.inc();
    c1.inc();
    c2.dec();

    c1.show();
    c2.show();
    
    // pre and post increment or decrement; or any other operator; work only in in-built data-type;
    // to use them with our data-types: we need to use operator overloading;
    return 0;
}