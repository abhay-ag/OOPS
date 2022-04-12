#include <iostream>

using namespace std;

void func2();

void func1(){
    func2();
}

void func2(){
    cout << "Hello Nested Function" << endl;
}


class Set{
    int a, b;
    public:
    void setData(int n1, int n2){
        a = n1;
        b = n2;
        largest();
    }
    int largest(){
        if (a>b){
            return a;
        }
        else{
            return b;
        }
    }
    void display(){
        cout << "The largest number is: " << largest() << endl;
    }
};
int main(){
    /*
        Encapsulation: enclosing of data members and methods in a class.
    */
    Set s1;
    s1.setData(10,15);
    s1.display();
    func1();
    return 0;
}