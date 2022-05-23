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
    ~Base(){
        cout << "Destructing Base" << endl;
    }
};

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
    return 0;
}