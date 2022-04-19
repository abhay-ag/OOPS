#include <iostream>

using namespace std;

/*
    Constructor: 
        1. Same name as the class name
        2. Declared always in the public scope
        3. no return type
        4. Automatically invoked when objects of a class are created
        5. Supports overloading
*/

class Hello{
    public:
    // fired even without calling
    Hello(){
        cout << "Cunstructor fired" << endl;
    }
};

int main() {
    Hello h1;       // even without any method Cunstructor fired. is printed onto the terminal.
    return 0;
}