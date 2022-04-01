/*
    Structures:
        1. User defined data types

    Problem: Store student data (without structures)
        int main(){
            int rollNo, marks;
            char name[50];
        }
        HERE ALL THE VARIABLES ARE STORED IN DIFFERENT MEMORY LOCATIONS AND THERE IS NO SUCH INBUILT DATA TYPE WHERE WE CAL STORE IT TOGETHER
    
    Solution:
        USE STRUCTURES

        struct student{
            int rollNo;
            char name[20];
            int marks;
        }

        'student' will act as a datatype for each of the inner variables.

    SYNTAX:
        struct <structure name>
        {
            // code
        }
*/

#include <iostream>

using namespace std;

// Declaring a Structure
struct student
{
    int rollNo;
    char name[20];
    int marks;
};
// Main Function
int main(){
    student s1;         // creating a student object in s1

    /*
        Accessing elements in a structure
            <structure name>.data_member
    */

    cout << "Enter the marks: ";
    cin >> s1.marks;

    cout << "Your Marks are: " << s1.marks << endl;

    // Creating an array of abjects of a structure

    student sArr[4];        // Creates an array for four student objects

    sArr[0].marks;          // Marks for student 0

    return 0;
}