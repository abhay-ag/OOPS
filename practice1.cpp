#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// float summing(int num1, int num2);  FUNCTION SIGNATURE

float cubing (int number){
    return pow(number, 3);
}

string hi(){
    return "Hello World";
}
float summing(int num1, int num2){
    return num1 + num2;
}
// void --> Doesn't return aything

// Program 9 -->FUNCTION RELATED

int getMax(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        return num1;
    }else if(num2 >= num1 && num2 >= num3){
        return num2;
    }else{
        return num3;
    }
}

// Program 10

string getDayOFWeek(int numDay){
    string dayName;
    
    return dayName;
}

int main(){
    // Program 8
    // ARRAYS IMPORTANT

    int luckyNums[] = {4,8,15,16,23,32};
                 //    0 1 2  3  4  5
    // accessing elements
    cout << luckyNums[0] << endl;;

    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    // giving size to arrays

    int twentyNums[20] = {};

    // Program 9
    // Using functions in c++

    string msg = hi();
    cout << msg << endl;

    // Passing Parameters

    int sum = summing(25,25);
    cout << sum << endl;

    // Using return statements
    // Nothing is executed after the return statements it is the end of the function.

    float cube = cubing(5);
    cout << cube << endl;

    // CONDITIONAL STATEMENTS

    bool isMale = true;
    bool isTall = true;

    // and operator --> both the conditions are true
    // not operator --> inverts the given conditions

    if(isMale && isTall){
        cout << "User is Male and Tall" << endl;
    }else if(isMale && !isTall){
        cout << "User is not a tall male" << endl;
    }else{
        cout << "User is not Male and not Tall" << endl;
    }

    // or operator --> Only one condition is true
    if(isMale || isTall){
        cout << "User is a tall male" << endl;
    }
    else{
        cout << "User is not a tall male" << endl;
    }

    // Program 9
    // Main Code

    int maxOfTwo = getMax(50,660, 760);
    cout << maxOfTwo << endl;

    // switch statements
    /*
        0 -> Monday
        1 -> Tuesday
    */

    return 0;
}

// Functions should not be declared below main unless function signature is not created.