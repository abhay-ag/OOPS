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

int main(){
    return 0;
}