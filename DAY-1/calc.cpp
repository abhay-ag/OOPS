#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    string opTor;
    float num1, num2;
    char ask = 'y';

    while (ask == 'y' || ask == 'Y'){
        cout << "Enter first Number: ";
        cin >> num1;
        cout << "Enter second Number: ";
        cin >> num2;
        cout << "Enter the operator [+, -, *, /]: ";
        cin >> opTor;

        if(opTor.length()>1){
            cout << "Enter the operator: ";
            cin >> opTor;
        }

        if(opTor == "+"){
            cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
        }else if(opTor == "-"){
            cout << "Difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
        }else if(opTor == "*"){
            cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
        }else if(opTor == "/"){
            cout << "Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
        }else{
            cout << "You entered wrong operator: " << opTor << endl;
        }
        cout << "Do you want to continue [y/n]: ";
        cin >> ask;
    }
    return 0;
}