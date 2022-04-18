#include <iostream>

using namespace std;

class B;

class A{
    int a;

    public:
    friend void max(A,B);
    friend void min(A,B);
    friend float avg(A,B);
    void setData(int i){
        a = i;
    }
};

class B{
    int b;

    public:
    friend void max(A,B);
    friend void min(A,B);
    friend float avg(A, B);
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
    return (a.a + b.b)/2;
}

int main() {
    int a, b;

    cout << "Enter two numbers: \n>";
    cin >> a >> b;

    A a1; B b1;

    a1.setData(a);
    b1.setData(b);

    max(a1, b1);
    min(a1, b1);
    cout << avg(a1, b1);


    return 0;
}