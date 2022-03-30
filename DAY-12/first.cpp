#include <iostream>

using namespace std;

void func(int &b){
    b = 20;
}

/*
    Function Overloading:
        1. not allowed in c
        2. we can have different functions with same name

    The way it works:
        1. Compares the number of parameters
        2. Data type of parameters

    EG:
        sum(int a, int b)
        sum(int a, int b, int c)
        sum(float a, float b)
*/

int main(){
    int x  =10;
    cout << x << endl;
    func(x);
    cout << x << endl;          // Call by refernce function assigns two names to the memory location of the vairable passed into it

    int *p , j;
    p = NULL;                   // Assigning a null value to the pointer variable
    p = &j;

    // p++ couts the new address with size plussed according to the datatype

    int i = 10;
    int &a = i;                 // To use a reference type variable we have to use initialization at the starting

    // a++ updates the value to i to 11 here.

    return 0;
}

/*
    Function Calls:
        1. Call by value
        2. Call by reference
        3. Call by pointer

    Call by value       ||      Call by pointer         || Call by Refernce

    func (a)             |  func (&a)                    |  func (a)

    void func(int a){    |  void func(int *ptr){         |  void func(int &b){
        //               |      //                       |      //
    }                    |  }                            |  }
*/