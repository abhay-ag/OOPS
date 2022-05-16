#include <iostream>
using namespace std;

// polymorphism
/*
    Means: many forms

    Compile Time => Static || can be achieved using function & operator overloading     \\ EARLY BINDING
    Run Time => Dynamic    || can be achieved using Virtual Fuction                     \\ LATE BINDING

    eg: in operator overloading the compiler binds the operator on the basis of definition
*/

class A{

    public:
    void show(){
        cout << "Hello" << endl;
    }
};
int main(){
    A obj, *p;

    p = &obj;
    p->show();
    return 0;
}