#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input

using namespace std;
char menuInput;
char mainInput;
vector<string> id;
vector<string> password;
void printIntroMenu(char menuInput);
void printMainMenu();
void start();
void login();
void createAccount();
void addData(string name, string pass);

int main(){
    cout << "Hello, User!! Welcome to this ATM Project!" << endl;
    cout << endl;
    start();
    return 0;
}
void start(){
    cout << "Please Select an option from the menu below: " << endl;
    cout << "l -> Login\nc -> Create New Account\nq -> Quit\n\n> " ;
    cin >> menuInput;
    printIntroMenu(menuInput);
}

void printIntroMenu(char menuInput){
    switch (menuInput){
        case 'l':
            login();
            break;
        case 'c':
            createAccount();
            break;
        case 'q':
            exit(0);
            break;
        // default:
        //     cout << "Please enter correct input!!! \n" << endl;
        //     printIntroMenu();
        //     break;
    }
}

void login(){
    if (id.size() == 0 && password.size()  == 0){
        cout << "Currently we have no accounts!! Please create an accout!" << endl << endl;
        createAccount();
    }
}

void addData(string name, string pass){
    replace(name.begin(), name.end(), ' ', '_');
    id.push_back(name);
    replace(pass.begin(), pass.end(), ' ', '_');
    password.push_back(pass);
}

void createAccount(){
    string uname, paswd, dummy;
    getline(cin, dummy);
    cout << "Enter user name [spaces get converted to underscore]: ";
    getline(cin, uname);

    cout << endl;

    cout << "Enter a password[spaces get converted to underscore]: ";
    getline(cin, paswd);

    addData(uname, paswd);

    cout << "Thank You! Your account has been created!" << endl << endl;
    
    cout << "l -> Login\nc -> Create New Account\nq -> Quit\n\n> " ;
    cin >> menuInput;

    printIntroMenu(menuInput);
}

void printMainMenu(){
    cout << "d -> Deposit Money\nw -> Withdraw Money\nr -> Request Money\nq -> Quit\n\n> " ;
    cin >> mainInput;
}