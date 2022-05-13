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
int main(){

    return 0;
}