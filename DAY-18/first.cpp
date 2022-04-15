#include <iostream>

using namespace std;

// Constant Member Fucnctions Contd.:

class Counter{
    int count;

    public: 

    Counter(){          // constructor is to be made to avoid all the constant class member discrepancies
        count = 0;
    }
        void set(){
            count = 0;
        }
        void inc(){
            count ++;
        }
        void display() const{
            // count += 2;      throws an error
            cout << count;
        }
};

class A{
    int a;

    protected:
    int b;

    public:
    friend class B;
    void set(int i, int j){
        a = i;
        b = j;
    }
};

class B{
    int x;

    protected:
    int y;

    public:
    void display(A obj){
        cout << "a = " << obj.a << " b = " << obj.b << endl;            // throws an error as a and b can't be used after the end of scope of A.
        // use friend class B; in class A
        // vice versa not possible
    }
};
int main(){
    Counter c1;         // non constant member can access all types of functions.

    c1.set();
    c1.inc();
    c1.inc();
    c1.display();

    const Counter c2;   // constant members can access only constant member functions.

    // c2.set();
    // c2.inc();
    c2.display();

    /*
        Friend Classes:
        Problem:
            Eg: class A{ a, b ==> a<private> b<public>};
                class B{ A obj; obj.a; obj.b; // Shows error.};
        Solution:
            line: 27;
    */

    A obj1;B obj2;
    obj1.set(10,20);
    obj2.display(obj1);
    return 0;
}