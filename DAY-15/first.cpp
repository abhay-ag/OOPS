// User defined Data-Types : Classes

/*
    Structure Syntax:
        struct < structure name >
        {
            int roll_no;
            int phone_no;
            float marks;
            char name[20];
        };

    Classes:
        1. By default data members are private.

    syntax Classes:
        class <class name>
        {
            <Access specifier> ? private : public : protected;
            // data members + function members
        }
*/
#include <iostream>
using namespace std;

struct Student{
    int rollNo;
    long int phNo;
    float marks;
    string name;
};

struct Employee{
    int empid;
    char ename[50];
    int salary;
};

int main(){
    struct Student s1 = {1,9466480463, 98.4,"Abhay"};
    cout << s1.name << endl;

    Employee emps[3];               // Creating an array of structures

    for (int i = 0 ; i < 3; i++){
        cin >> emps[i].empid;
        cin >> emps[i].ename;
        cin >> emps[i].salary;
    }

    int bigSal = emps[0].salary;
    int minSal = emps[0].salary;
    int indexMax = 0;
    int indexMin = 0;

    for(int i = 0; i < 3; i++){
        if(emps[i].salary > bigSal){
            bigSal = emps[i].salary;
            indexMax = i;
        }
        if(emps[i].salary < minSal){
            minSal = emps[i].salary;
            indexMin = i;
        }
    }
    cout << "Biggest Salary is of " << emps[indexMax].ename << ": " << bigSal << endl;
    cout << "Smallest Salary is of " << emps[indexMin].ename << ": " << minSal << endl;
    return 0;
}