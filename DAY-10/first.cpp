/*  
    FUNCTIONS:
        set of statements written separately from main to perform a particular task.
        Purpose of Functions:
            To ease the process of writing code as same code can be used again and again

    Definition of a function:  
        <return type> <name of the function> ([parameters with data types if any]){
            [body];
            return;                 // If a function returns any value then use a return type else use void;
        }
    Calling of a function:
        <name of the function> ([parameters if any]);
*/

#include <iostream>

using namespace std;

// Function without return without parameter
void add(){                     // Function Definition
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << a+b << endl;
}
// Function with return statement without parameter
int sub(){
    int a,b;
    cout << "Enter two number: ";
    cin >> a >>b;

    return a-b;
}
// Function without return statement with parameters
void divide(int a, int b){
    int c = a/b;
    cout << "Fraction: " << c << endl;
}
// Function with return statement and paramters
int mul(int a, int b){
    return a * b;
}
int main(){
    add();                      // Function Calling

    int res = sub();          // Function with return should be assigned a value
    cout << "Difference: " << res << endl;

    divide(30,20);                // Parameters should be passed into the brackets

    int resP = mul(23,32);
    cout << "Product: " << resP << endl;
    return 0;
}