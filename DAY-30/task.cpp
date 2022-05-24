#include <iostream>
using namespace std;

template <class S>

class Calculate{
    S x, y;
    public:
    S sum(S i, S j){
        return i + j;
    }
    S mul(S i, S j){
        return i * j;
    }
    S div(S i, S j){
        return i/j;
    }
    S sub(S i, S j){
        return i -j;
    }
};

int main(){
    Calculate <int>c1;Calculate <float>c2;Calculate <double>c3;
    cout << c1.sum(5,4) << endl;
    cout << c2.sum(5.1,4.4) << endl;
    cout << c3.sum(5.75474573,4.890324098234) << endl;
    cout << c1.mul(5,4) << endl;
    cout << c2.mul(5.1,4.4) << endl;
    cout << c3.mul(5.1231,4.123114) << endl;
    cout << c1.div(5,4) << endl;
    cout << c2.div(5.3,4.2) << endl;
    cout << c3.div(5.39388,4.99238) << endl;
    cout << c1.sub(5,4) << endl;
    cout << c2.sub(5.3,4.2) << endl;
    cout << c3.sub(5.39388,4.99238) << endl;
    return 0;
}