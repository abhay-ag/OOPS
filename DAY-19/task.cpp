#include <iostream>

using namespace std;

class A{
    int a;

    public:
    void setData(int i){
        a = i;
    }
};

class B{
    int b;

    public:
    void setData(int k){
        b = k;
    }
};

void max(A a, B b){
    if(a.a > b.b){
        cout << a.a << " is greater. ";
    }else{
        cout << b.b << " is greater. ";
    }
}

void min(A a, B b){
    if(a.a > b.b){
        cout << b.b << " is minimun. ";
    }else{
        cout << a.a << " is minimum. ";
    }
}

float avg(A a, B b){
    return (a.a + b.b)/2
}

int main() {
    int a, b;

    cout << "Enter two numbers: \n>";
    cin >> a >> b;

    A a1; B b1;

    a1.setData(a);
    b1.setData(b);


    return 0;
}