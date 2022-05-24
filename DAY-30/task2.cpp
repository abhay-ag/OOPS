#include <iostream>
using namespace std;

template <class A, class B = float>

class Calc{
    A x;
    B y;
    public:
    A sum(A a, B b){
        return a+b;
    }
    B sub(A a, B b){
        return a-b;
    }
};

int main(){
    Calc <int> c1;
    cout << c1.sub(5,4.889) << endl;
    cout << c1.sum(5, 1.2) << endl;
    return 0;
}