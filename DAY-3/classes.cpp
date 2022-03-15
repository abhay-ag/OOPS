#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        int rollNo;
        string name;
        string dummy;
    public:
        void get(){
            cout << "Enter the Roll No: ";
            cin >> rollNo;

            getline(cin, dummy); // Important for skipping the \n character retruned by the cin funcrtion.

            cout << "Enter the name: ";
            getline(cin, name);
        }
        void show(){
            cout << "The name is: " << name << endl;
            cout << "The rollNo is: " << rollNo << endl;
        }

};

int main(){

    Student s1, s2;

    s1.get();
    s1.show();

    s2.get();
    s2.show();

    return 0;
}