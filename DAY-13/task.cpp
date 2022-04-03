#include <iostream>
#include <string>

using namespace std;

struct student
{
    int marks;
    int rollNo;
    string name;
};

int main(){
    student sArr[3];
    string dummy;
    int bignum = sArr[0].marks;
    student sortArray[3];

    // Problem in assigning the bignum to negative infinity 
    // Solution :
        /*
            Assign bignum to first element of the array;
            Run the loop from 1;
        */

    for (int i = 0; i < 3 ; i ++){
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
    for (int i = 0; i < 3; i ++){
        if (sArr[i].marks > bignum){
            index = i;
            bignum = sArr[i].marks;
        }
    }
    cout << "Highest Marks are of " << sArr[index].name << ", and the marks are: " << sArr[index].marks << endl;
    // Sorting array
    string nameSort;int rollSort, marksSort;
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j ++){
            if(sArr[i].name > sArr[j].name){
                nameSort = sArr[i].name;
                sArr[i].name = sArr[j].name;
                sArr[j].name = nameSort;

                rollSort = sArr[i].rollNo;
                sArr[i].rollNo = sArr[j].rollNo;
                sArr[j].rollNo = rollSort;

                marksSort = sArr[i].marks;
                sArr[i].marks = sArr[j].marks;
                sArr[j].marks = marksSort;
            }else if(sArr[i].name == sArr[j].name){
                if (sArr[i].rollNo < sArr[j].rollNo){
                    nameSort = sArr[i].name;
                    sArr[i].name = sArr[j].name;
                    sArr[j].name = nameSort;

                    rollSort = sArr[i].rollNo;
                    sArr[i].rollNo = sArr[j].rollNo;
                    sArr[j].rollNo = rollSort;

                    marksSort = sArr[i].marks;
                    sArr[i].marks = sArr[j].marks;
                    sArr[j].marks = marksSort;
                }
            }
        }
    }

    for(int i = 0; i < 3; i ++){
        cout << sArr[i].name << " " <<  sArr[i].rollNo << " " << sArr[i].marks << endl;
    }
    return 0;
}