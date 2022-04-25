#include <iostream>

using namespace std;

class B;

class A{
    int *a;

    public:
    friend void swaping(A &ob1, B &ob2);
    friend void min(A &ob1, B &ob2);
    friend void max(A &ob1, B &ob2);
    friend void mean(A &ob1, B &ob2);
    friend class B;
    A(int i = 0){
        a = new int;
        *a = i;
    }
    void disp(){
        cout << "A after swap " << *a << endl;
    }
};

class B{
    int *b;

    public:
    friend void swaping(A &ob1, B &ob2);
    friend void min(A &ob1, B &ob2);
    friend void max(A &ob1, B &ob2);
    friend void mean(A &ob1, B &ob2);
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

    void min(A &ob1, B &ob2){
        if(ob1.a > ob2.b){
            cout << "B " << *ob2.b << " is minimum." << endl;
        }else{
            cout << "A " << *ob1.a << " is minimum." << endl;
        }
    }

    void max(A &ob1, B &ob2){
        if(ob1.a > ob2.b){
            cout << "A " << *ob1.a << " is maximum." << endl;
        }else{
            cout << "B " << *ob2.b << " is maximum." << endl;
        }
    }

    void mean(A &ob1, B &ob2){
        int meanA = (*ob1.a + *ob2.b) /2;

        cout << "Mean => " << meanA << endl;
    }

    void disp(){
        cout << "B after swap " << *b << endl;
    }
};

void min(A &ob1, B &ob2){
    if(ob1.a > ob2.b){
        cout << "B " << *ob2.b << " is minimum." << endl;
    }else{
        cout << "A " << *ob1.a << " is minimum." << endl;
    }
}

void max(A &ob1, B &ob2){
    if(ob1.a > ob2.b){
        cout << "A " << *ob1.a << " is maximum." << endl;
    }else{
        cout << "B " << *ob2.b << " is maximum." << endl;
    }
}

void mean(A &ob1, B &ob2){
    int meanA = (*ob1.a + *ob2.b) /2;

    cout << "Mean => " << meanA << endl;
}

void swaping(A &ob1, B &ob2){
    int *temp = ob1.a;
    ob1.a = ob2.b;
    ob2.b = temp;

    cout << "A==> " << *ob1.a << " B==> " << *ob2.b << endl;
}

int main(){

    int a, b;

    cin >> a >> b;

    cout << "A in main ==> " << a << " B in main ==> " << b << endl;

    A a1(a);
    B b1(b);

    b1.swap(a1, b1);

    a1.disp();
    b1.disp();

    b1.min(a1, b1);
    b1.max(a1, b1);
    b1.mean(a1, b1);

    swaping(a1, b1);

    a1.disp();
    b1.disp();

    min(a1,b1);
    max(a1,b1);
    mean(a1,b1);
    return 0;
}