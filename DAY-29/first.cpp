#include <iostream>
using namespace std;

/*
    Virtual Destructor
    Exception Handling
*/

class Base{
    public:
    Base(){
        cout << "Constructing Base" << endl;
    }
    virtual ~Base(){
        cout << "Destructing Base" << endl;
    }
};

// ambiguity ?? solves the diamond problem use virtual class in one of the inheritence || mainly in hybrid inheritance || A => D1 & D2 => B

class Derived : public Base{
    public:
    Derived(){
        cout << "Constructing Derived" << endl;
    }
    ~Derived(){
        cout << "Destucting Derived" << endl;
    }
};

// new and delete used to dynamically allocate memory during runtime

int main(){
    Derived *d = new Derived();         // dynamically allocated *d points to the memory address
    Base *b = d;                        // no need to write a &d because it will become pointer to the pointer
    delete b;                           // not the expected output we don't get the destructing derived in the terminal the solution is to make the destructor of the base class virtual
    return 0;
}