#include <iostream>

using namespace std;

// Swap without the use of pointer type variable

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    cout << "A is: " << a << " B is: " << b << endl;                    // a: 20 b: 10
}

// Swap with the use of pointer type variable

void swap(int *ptr1, int *ptr2){
    int t = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;
    cout << "A is: " << *ptr1 << " B is: " << *ptr2 << endl;            // a: 20 b: 10
}

int main(){
    int a = 10; int b = 20;
    cout << "First Swap() A is: " << a << " B is: " << b << endl;       // a: 10 b: 20
    swap(a, b);
    cout << "After First Swap() A is: " << a << " B is: " << b << endl; // a: 10 b: 20
    swap(&a, &b);
    cout << "After Second Swap() A is: " << a << " B is: " << b << endl;// a: 20 b: 10
    return 0;
}