/*
    Pointers
    ________
    Every variable has an address in the memory which it is stored.
    POINTER Variables ==> the variables that store the address of another variable in the memory

        Eg: int a ==> 'a' stores 4 bytes in the memory and it has a name
            1000 -> 1004 memory block for a
            make a variable ptr to store the address of 'a' ==> Pointer Variable [Carrying the address of a]
*/
#include <iostream>

using namespace std;

int main(){
    int a, b;
    a = 20; b = 30;
    /*
        Declaration of Pointer Variable
            <datatype> * <name of variable>
    */
    int *ptr , *ptr1;
    // The Datatype of pointer is the only datatype it can store ||  In this case it can store only int datatype

    /*
        & ==> ampersand ==> Address of 

        * ==> Purposes
            1. To declare a pointer variable
            2. Dereferencing [VALUE AT] => Accessing the value stored in the memory address
    */

    ptr = &a;       //Assigning the address of a to ptr
    ptr1 = &b;
    return 0;
}