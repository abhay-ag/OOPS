/*
    Functions:
        1. Call by value
        2. Call by refernce

    Call by Value --> add();
    Call by refernce --> passing the refernce of the variable into the function
*/

#include <iostream>

using namespace std;

void swapValue(int a, int b){
    int t = a;
    a = b; 
    b = t;
    cout << "Swapped nos. are : " << a << " " << b << endl;
}

void swapRefernce(int *ptr1, int *ptr2){
    int t = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;
    cout << "T -> is: " << *ptr1 << '\t' << "U -> is: " << *ptr2 << endl;
}

int main(){
    int *ptr;
    int a = 20;
    ptr = &a;
    cout << ptr << endl;

    // Call by Value

    swapValue(35,32);

    // Call by Reference

    int t,u;
    cout << "Enter two Numbers: ";
    cin >> t >> u;
    cout << "Before Swapping T -> is: " << t << '\t' << "U -> is: " << u << endl;
    swapRefernce(&t, &u);                                                           // This changes the variable in the main function also
    cout << "After Swapping T -> is: " << t << '\t' << "U -> is: " << u << endl;
    return 0;
}

/*
    Definition of a reference type funtion:

        <return type> <function name> ([arguements with declaration like int *ptr]){
            //body
        }

    The switching of control from one function to another is called context switching.
    To Avoid context switching we use inline functions

    Definition of an inline function:
        inline <return type> <function name> ([params if any]){
            // body
        }
*/