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
    // =============== //
    void inc(){
        count++;
    }
    void dec(){
        count--;
    }
    // =============== //
    // operator overloading
    
    void operator ++(){
        count++;
    }
    void show() const{
        cout << "Counter: " << count << endl;
    }
};

/*
    Syntax of operator overloading: [can be achieved through a friend function or a member function]

    1. Member function:
        <return type> operator <symbol>(parameters if any){
            // logic
        }
*/

int main(){
    // object creation
    Counter c1, c2;
    c1.inc();   // ++c1
    c1.inc();   // ++c1
    c2.dec();   // --c2


    // operator overloading ==> increment
    ++c1;

    c1.show();
    c2.show();
    
    // pre and post increment or decrement; or any other operator; work only in in-built data-type;
    // to use them with our data-types: we need to use operator overloading;
    return 0;
}