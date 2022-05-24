#include <iostream>
using namespace std;

// template ==> used for generic programming -> class template or function template
// instead of function overloading and repeating the same function we use a generic data type

// same class can be used for character but has to be repeated
class Example{
    int x;
    public:
    void set(){
        cin >> x;
    }
    void get(){
        cout << x;
    }
};

int main(){
    return 0;
}