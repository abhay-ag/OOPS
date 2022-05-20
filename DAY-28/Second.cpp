#include <iostream>
using namespace std;

class Student{
    protected:
    int m1, m2, m3;

    public:
    Student(int mr1, int mr2, int mr3){
        m1 = mr1;
        m2 = mr2;
        m3 = mr3;
    }
};

class A : public Student {
    protected:
    float total;
    public:
    A(int mr1, int mr2, int mr3):Student(mr1, mr2, mr3){
        total = m1 + m2 + m3;
    }
};

class B : public A{
    float perc;
    public:
    B(int m1, int m2, int m3):A(m1, m2, m3){}

    void percentage(){
        perc = (total / 300) *100;
    }

    void show() const{
        cout << "Total Marks: " << total << " Percentage: " << perc << "%" << endl;
    }
};  

int main(){
    B s1(79, 80, 88);
    s1.percentage();

    s1.show();
    return 0;
}