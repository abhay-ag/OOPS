#include <iostream>
using namespace std;

template <class T>

// single parameter for function template;
// will give error if we give two different data types;
T add(T i, T j){
    cout << i + j << endl;
}

// we have to define templates just before the usage function or class else we get errors.
template <class A, class B = float>
B add(A i, B j){
    cout << i + j << endl;
}

int main(){
    add(5,4);
    // add(25,2.5);    // shows error as type mismatch
    add(2.523,4.5);

    // mulitple paramters
    add(2, 2.5);
    return 0;
}