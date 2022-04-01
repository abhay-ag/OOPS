#include <iostream>

using namespace std;

struct student
{
    int marks;
    int rollNo;
    string name;
};

int main(){
    student sArr[5];
    string dummy;
    int bignum = -9999;

    for (int i = 0; i < 5 ; i ++){
        cout << "Enter the Name of student: ";
        getline(cin, sArr[i].name);
        cout << "Enter the Roll No of student: ";
        cin >> sArr[i].rollNo;
        cout << "Enter the Marks of student: ";
        cin >> sArr[i].marks;
    }
    int index = 0;
    for (int i = 0; i < 5; i ++){
        if (sArr[i].marks > bignum){
            index = i;
            bignum = sArr[i].marks;
        }
    }
    cout << "Highest Marks are of " << sArr[index].name << ", and the marks are: " << sArr[index].marks << endl;
    return 0;
}