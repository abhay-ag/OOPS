#include <iostream>

using namespace std;

void func(int &b){
    b = 20;
}

int main(){
    int x  =10;
    cout << x << endl;
    func(x);
    cout << x << endl;          // Call by refernce function assigns two names to the memory location of the vairable passed into it

    int *p , j;
    p = NULL;                   // Assigning a null value to the pointer variable
    p = &j;

    int i = 10;
    int &a = i;                 // To use a reference type variable we have to use initialization at the starting

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