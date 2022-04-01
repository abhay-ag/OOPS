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
    int bignum = sArr[0].marks;

    // Problem in assigning the bignum to negative infinity 
    // Solution :
        /*
            Assign bignum to first element of the array;
            Run the loop from 1;
        */

    for (int i = 0; i < 5 ; i ++){
        cout << "Enter the Roll No of student: ";
        cin >> sArr[i].rollNo;
        getline(cin, dummy);
        cout << "Enter the Name of student: ";
        getline(cin, sArr[i].name);
        cout << "Enter the Marks of student: ";
        cin >> sArr[i].marks;
        cout << endl;
    }
    int index = 0;
    for (int i = 1; i < 5; i ++){
        if (sArr[i].marks > bignum){
            index = i;
            bignum = sArr[i].marks;
        }
    }
    cout << "Highest Marks are of " << sArr[index].name << ", and the marks are: " << sArr[index].marks << endl;
    return 0;
}