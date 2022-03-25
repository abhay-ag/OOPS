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

void add(){                     // Function Definition
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << a+b << endl;
}
int main(){
    add();                      // Function Calling
    return 0;
}