#include <iostream>
using namespace std;

// operator overloading
class Counter{
    int count;

    public:
    // constructor
    Counter(){
        count = 0;
    }
    // member functions
    // =============== //
    void inc(){
        count++;
    }
    void dec(){
        count--;
    }
    // =============== //
    // operator overloading
    
    // pre increment only
    /*void operator ++(){
        count++;
    }*/

    // post increment only
    /*void operator ++(int){
        count++;
    }*/

    // implementing assignment
    Counter operator ++(){
        Counter temp;

        temp.count = ++count;
        return temp;
    }

    Counter operator ++(int){
        Counter temp;

        temp.count = count++;
        return temp;
    }
    void show() const{
        cout << "Counter: " << count << endl;
    }
};

/*
    Syntax of operator overloading: [can be achieved through a friend function or a member function]

    1. Member function:
        <return type> operator <symbol>(parameters if any){
            // logic
        }
*/

int main(){
    // object creation
    Counter c1, c2;
    c1.inc();   // ++c1
    c1.inc();   // ++c1
    c2.dec();   // --c2


    // operator overloading ==> increment
    // assignment
    Counter c4 = c1++;
    Counter c3 = ++c1;

    c1.show();
    c2.show();
    c3.show();
    c4.show();
    
    /*
        pre and post increment differnce

        int a = 10, b, c;
        
        // if not assigning then they have the same meaning
        // but

        b = a++;        // means b = a => a = a+1;      // output: 10

        c = ++a;        // means a = a+1 => c = a;      // output: 12;
    */

    // pre and post increment or decrement; or any other operator; work only in in-built data-type;
    // to use them with our data-types: we need to use operator overloading;
    return 0;
}