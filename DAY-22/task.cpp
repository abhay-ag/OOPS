#include <iostream>

using namespace std;

class A{
    int *a;

    public:
    friend class B;
    A(int i = 0){
        a = new int;
        *a = i;
    }
    void disp(){
        cout << *a << endl;
    }
};

class B{
    int *b;

    public:
    B(int j = 0){
        b = new int;
        *b = j;
    }

    void swap(A &ob1, B &ob2){
        int *temp = ob1.a;
        ob1.a = ob2.b;
        ob2.b = temp;
        cout << "A==> " << *ob1.a << " B==> " << *ob2.b << endl;
    }

    void disp(){
        cout << *b << endl;
    }
};

int main(){

    int a, b;

    cin >> a >> b;

    cout << "A in main ==> " << a << " B in main ==> " << b << endl;

    A a1(a);
    B b1(b);

    b1.swap(a1, b1);

    a1.disp();
    b1.disp();
    return 0;
}