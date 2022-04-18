#include <iostream>

using namespace std;

// Friend Functions

class Integer{
    int a,b;

    public:
    friend float mean(Integer obj);     // friend made hence private members can be accessed
    void setValue(int x, int y){
        a = x;
        b = y;
    }
};

float mean(Integer obj){
    float r;
    r = obj.a + obj.b /2;       // without friend function error is thrown
    return r;
}

int main(){
    Integer i1;

    int i,j;
    cout << "Enter two values: ";
    cin >> i >> j;

    i1.setValue(i, j);

    cout << mean(i1);
    return 0;
}