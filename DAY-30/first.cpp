#include <iostream>
using namespace std;

// template ==> used for generic programming -> class template or function template
// instead of function overloading and repeating the same function we use a generic data type

// same class can be used for character but has to be repeated
template <class T>

class Example{
    // int x;
    T x;        // generic data type || at the time of object creation we can specify the data type of T || has to be same as the name specified in the template;
    public:
    void set(){
        cin >> x;
    }
    void get(){
        cout << x;
    }
};

// solution
/*
    syntax of template:

    template <class T>      ==> where T is a generic type
*/

// setting up multiple class templates: template <class T, class U>
// declaring the respective object will be like: Example <int, float> <obj name>

// class template with multiple parameters and default parameters
// template <class T, class U = float>
// when an object is made corresponding to the same class then U will be float by default and need not be passed as a parameter.

int main(){
    // declaring objects
    // <class name> <dtype><object name>
    Example <int> e1;
    Example <char>e2;
    Example <float>e3;
    e1.set();
    e2.set();
    e3.set();
    e1.get();
    e2.get();
    e3.get();
    return 0;
}