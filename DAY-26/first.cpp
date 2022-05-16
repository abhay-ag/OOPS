#include <iostream>
using namespace std;

// constructor and destrucor in inheritance

// base class
class Base{
    public:
    // constructor
    Base(){
        cout << "Base Class Constructor" << endl;
    }

    // destructor
    ~Base(){
        cout << "Base Class Destructor" << endl;
    }
};

// derived class
class Derived : public Base{
    public: 
    Derived(){
        cout << "Derived Class Constructor" << endl;
    }

    ~Derived(){
        cout << "Derived Class Destructor" << endl;
    }
};

int main(){
    Derived d;
    /*
        Output:
            1. Base executes first and last execution is of base.
            2. Child executes after and before the parent object dies.
    */
    return 0;
}