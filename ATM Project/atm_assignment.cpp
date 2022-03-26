#include <iostream>
#include <string>

using namespace std;
char menuInput;
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

int main(){
    cout << "Hello, User!! Welcome to this ATM Project!" << endl;
    cout << endl;
    start();
    return 0;
}
void start(){
    cout << "Please Select an option from the menu below: " << endl;
    printIntroMenu();
}

void printIntroMenu(){
    cout << "l -> Login\nc -> Create New Account\nq -> Quit\n\n> " ;
    cin >> menuInput;

    switch (menuInput){
        case 'l':
            // login();
            break;
        case 'c':
            // createAccount();
            break;
        case 'q':
            exit(0);
            break;
        default:
            cout << "Please enter correct input!!! \n" << endl;
            printIntroMenu();
            break;
    }
}