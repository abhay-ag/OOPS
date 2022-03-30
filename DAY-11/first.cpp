/*
    Functions:
        1. Call by value
        2. Call by pointer

    Call by Value --> add();
    Call by pointer --> passing the pointer of the variable into the function
*/

#include <iostream>

using namespace std;

void swapValue(int a, int b){
    int t = a;
    a = b; 
    b = t;
    cout << "Swapped nos. are : " << a << " " << b << endl;
}

void swappointer(int *ptr1, int *ptr2){
    int t = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;
    cout << "T -> is: " << *ptr1 << '\t' << "U -> is: " << *ptr2 << endl;
}

int add(int n1, int n2, int n3 = 0, int n4 = 0){
    return n1+n2+n3+n4;
}

int main(){
    int *ptr;
    int a = 20;
    ptr = &a;
    cout << ptr << endl;

    // Call by Value

    swapValue(35,32);

    // Call by Pointer

    int t,u;
    cout << "Enter two Numbers: ";
    cin >> t >> u;
    cout << "Before Swapping T -> is: " << t << '\t' << "U -> is: " << u << endl;
    swappointer(&t, &u);                                                           // This changes the variable in the main function also
    cout << "After Swapping T -> is: " << t << '\t' << "U -> is: " << u << endl;

    // Default Parameters

    int res2 = add(1,3);
    int res3 = add(1,2,2);
    int res4 = add(1,2,3,1);

    cout << "Sum of two: " << res2 << "\nSum of three: " << res3 << "\nSum of four: " << res4 << endl;
    return 0;
}

/*
    Definition of a pointer type funtion:

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

/*
    Default Parameters:
        To make a functino dynamic so that it can accept any numbers of inputs  specified;

        In the function add:
            int n3  = 0; is the default parameter

        All the default paramters should be declared after the mandatory parameters.
*/