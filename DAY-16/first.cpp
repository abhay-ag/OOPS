#include <iostream>

using namespace std;

void func2();

void func1(){
    func2();
}

void func2(){
    cout << "Hello Nested Function" << endl;
}


class Counter{
    static int count;
    public:
    void inc(){
        count++;
    }
    void display(){
        cout << "Counter at the end: "<< count << endl;
    }
};
int Counter::count = 0;

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
    /*
        Static members.

        1. Different objects have the same static member.

        Initialization of static members out of the class scope

        <Datatype> <class name> :: <Data member name> = [value];
    */

    Counter ob1, ob2, ob3;

    ob1.inc();
    ob2.inc();
    ob1.inc();
    ob3.inc();

    ob1.display();
    ob2.display();
    ob3.display();

    return 0;
}