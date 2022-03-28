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
    cout << "Swapped nos. are : " << a << b << endl;
}

int main(){
    int *ptr;
    int a = 20;
    ptr = &a;
    cout << ptr << endl;

    swapValue(35,32);
    return 0;
}

/*
    Definition of a reference type funtion:

        <return type> <function name> ([arguements with declaration like int *ptr]){
            //body
        }
*/