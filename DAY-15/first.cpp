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

    Employee emps[3];

    for (int i = 0 ; i < 3; i++){
        cin >> emps[i].empid;
        cin >> emps[i].ename;
        cin >> emps[i].salary;
    }

    int bigSal = emps[0].salary;

    for(int i = 0; i < 3; i++){
        if(emps[i].salary > bigSal){
            bigSal = emps[i].salary;
        }
    }
    cout << "Biggest Salary: " << bigSal << endl;
    return 0;
}