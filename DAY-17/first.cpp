#include <iostream>

using namespace std;

/*
    Cosntant member functions:
*/

class Counter{
    int count;

    public:
    void set(){
        count = 0;
    }
    void inc(){
        count ++;
    }
    void display(){
        count += 2;         // prob: display function should not be able to increase the value of count
        cout << count;
    }
};

int main(){
    // Constant member;

    const int x = 10;
    // x = x+10;        throws an error
    return 0;
}