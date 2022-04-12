#include <iostream>

using namespace std;

void func2();

void func1(){
    func2();
}

void func2(){
    cout << "Hello Nested Function" << endl;
}

int main(){
    func1();
    return 0;
}