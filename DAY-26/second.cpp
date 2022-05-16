#include <iostream>
using namespace std;

class Student{
    int rNo;
    public:

    // parameterized constructor
    Student(int i = 1){
        rNo = i;
    }
    void show(){
        cout << "Roll no: " << rNo << endl;
    }

};

class Test:public Student{
    int m1, m2;
    public:
                                // we define the name of the class 
                                // in the form of Constructor():Student(<name of variable to be passed in Base Class>)
    Test(int m_1 = 0, int m_2 = 0, int r = 1):Student(r){
        m1 = m_1;
        m2 = m_2;
    }

    void show(){
        Student::show();     // this will do recursion;
        // to avoid
        // one solution use different names
        // other declare data member as protected
        // third solution use the scope resolution with base class name
        cout << "Marks are: " << m1 << " " << m2 << endl;
    }
};

int main(){
    Test t1(25,25);
    t1.show();
    return 0;
}