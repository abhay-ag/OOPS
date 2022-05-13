#include <iostream>
using namespace std;

// inheritance ==> inheriting features from parent
// creating a new class from existing class. ==> new class = child class && existing class = parent class
// child class == derived class || sub class && parent class == base class || super class
/*
    class A{
        private:
        int x;
        protected:
        int y;
        public:
        int z;
    };

    syntax of derived class:
        class <Class name> : <visibility specifier ==> private by default || public || protected> <Parent class>

    class B : A{
        // can't access X ==> private
        // can access Y, Z
    }

    the visiblity specifer defines the visiblity of the inherited members.
    IMP: public can't change the visiblity specifiers of the inherited members;

    Types of inheritence:
        1. Single               A => B
        2. Multiple             A & B => C
        3. Multilevel           A => B => c
        4. Hierarchical         A => B & C & D
        5. Hybrid               A => B => C & D  || mixture of more than two inheritence types
*/

class Base{
    int x;
    protected:
    int y;
    public: 
    int z;

    void set_x(){
        cout << "Enter x: ";
        cin >> x;
    }

    void dispX(){
        cout << "X => " << x << endl;
    }
};

class Derived : Base{
    public: 
    void set(){
        // to set x;
        set_x();
        // other members accessible
        cout << "Enter y: ";
        cin >> y;

        cout << "Enter z: ";cin >> z;
    }
    void disp(){
        //display x
        dispX();
        //other members accessible
        cout << "Y => " << y << endl;
        cout << "Z => " << z << endl;
    }
};

int main(){
    Derived d;
    d.set();
    d.disp();
    return 0;
}