#include <iostream>
using namespace std;

class Student{
    protected:
    int m1, m2, m3;
};

class Test : Student{
    int average;
    public:
    void get(){
        cout << "Enter marks in three subjects: ";
        cin >> m1 >> m2 >> m3;
        avg();
        grade();
    }
    private:
    void avg(){
        average = (m1 + m2 + m3) / 3;
        cout << "Average: " << average << endl;
    }
    void grade(){
        if(average > 90 && average <= 100){
            cout << "Grade A" << endl;
        }else if(average > 80 && average <= 90){
            cout << "Grade B" << endl;
        }else if(average > 70 && average <= 80){
            cout << "Grade C" << endl;
        }else if(average > 55 && average <= 70){
            cout << "Grade D" << endl;
        }else{
            cout << "Grade E" << endl;
        }
    }

};

// todo ==> 
/*
    test & sports => result  ==> multiple
    student & test => result    ==> multilevel
    student & test + sports => result ==> Hybrid
*/

int main(){
    Test s1;
    s1.get();
    return 0;
}