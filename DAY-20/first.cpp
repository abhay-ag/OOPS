#include <iostream>

using namespace std;

/*
    Constructor: 
        1. Same name as the class name
        2. Declared always in the public scope
        3. no return type
        4. Automatically invoked when objects of a class are created
        5. Supports overloading

    Mainly constructors are used for initialization.
*/

class Hello{
    public:
    // fired even without calling
    Hello(){
        cout << "Cunstructor fired" << endl;
    }
};

class Integer{
    int a, b;

    public: 
    
    // parameterized constructor
    Integer(int i, int j){
        a = i;
        b = j;
    }
    void display() const{
        cout << "A => " << a << " B => " << b << endl;
    }
};

int main() {
    Hello h1;       // even without any method "Cunstructor fired" is printed onto the terminal.

    Integer i1(10,20), i2(20,30);

    i1.display();
    i2.display();
    return 0;
}