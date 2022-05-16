#include <iostream>
using namespace std;

class Student{
    protected:
    int rNo;
    string name;

    public:
    Student(string n = "",int i = 1){
        rNo = i;
        name = n;
    }
};

class Sports{
    protected:
    int score;

    public:
    Sports(int sc = 0){
        score = sc;
    }
};

class Test:public Student{
    protected:
    int m1, m2;

    public:
    Test(int mr1 = 0, int mr2 = 0, string nm = "", int rN = 1):Student(nm, rN){
        m1 = mr1;
        m2 = mr2;
    }
};

class Result:public Test, public Sports{
    int avg;
    public:

    Result(int mar1 = 0, int mar2 = 0, string nS = "", int r = 1, int sc = 0):Test(mar1, mar2, nS, r), Sports(sc){
        avg = (mar1 + mar2 + sc) / 3;
    }

    void showAvg(){
        cout << "Average of " << name << " with rNo " << rNo << " is: " << avg << endl;
    }

    void showGrade(){
        if(avg > 90 && avg <= 100){
            cout << "Grade A" << endl;
        }else if(avg > 80 && avg <= 90){
            cout << "Grade B" << endl;
        }else if(avg > 70 && avg <= 80){
            cout << "Grade C" << endl;
        }else if(avg > 60 && avg <= 70){
            cout << "Grade D" << endl;
        }else{
            cout << "Grade E" << endl;
        }
    }
};

int main(){
    Result s1(80, 95, "Abhay", 2110990034, 89);
    s1.showAvg();
    s1.showGrade();
    return 0;
}