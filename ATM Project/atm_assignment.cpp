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
vector<int> bal(9999, 0);
void printIntroMenu();
void printMainMenu(int index, string uname);
void start();
void login();
void createAccount();
void addData(string name, string pass);
void deposit(int index, string uname);
void withdraw(int index, string uname);
void request(int index, string uname);

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
            login();
            break;
        case 'c':
            createAccount();
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

void login(){
    bool found = false;
    string uname, paswd, dummy;
    int index;
    if (id.size() == 0 && password.size()  == 0){
        cout << endl;
        cout << "Currently we have no accounts!! Please create an account!" << endl;
        createAccount();
    }
    else{
        getline(cin, dummy);
        cout << endl;
        cout << "Enter your User Name: ";
        getline(cin, uname);
        cout << endl;

        for(int i = 0; i < id.size(); i ++){
            if(uname == id[i]){
                found = true;
                index = i;
                break;
            }
        }
        if(found){
            cout << "Enter your Password: ";
            getline(cin, paswd);
            if(password[index] == paswd){
                cout << endl;
                cout << "****** LOGIN SUCCESSFULL ******" << endl << endl;
                printMainMenu(index, uname);
            }
            else{
                cout << endl;
                cout << "ERROR!!! PLEASE START AGAIN" << endl << endl;
                printIntroMenu();
            }
        }
        else{
            cout << "No such user exists!! Please Register!" << endl << endl;
            printIntroMenu();
        }
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
    cout << endl;
    cout << "Enter user name [spaces get converted to underscore]: ";
    getline(cin, uname);

    cout << endl;

    cout << "Enter a password[spaces get converted to underscore]: ";
    getline(cin, paswd);

    addData(uname, paswd);

    cout << "Thank You! Your account has been created!" << endl << endl;

    printIntroMenu();
}

void printMainMenu(int index, string uname){
    cout << endl;
    cout << "--------Hello, " << uname << "! Please select from options below --------" << endl << endl;
    cout << "d -> Deposit Money\nw -> Withdraw Money\nr -> Request Balance\nq -> Quit\n\n> " ;
    cin >> mainInput;

    switch (mainInput){
        case 'd':
            deposit(index, uname);
            break;
        case 'w':
            withdraw(index, uname);
            break;
        case 'r':
            request(index, uname);
            break;
        case 'q':
            exit(0);
            break;
        default:
            cout << endl;
            cout << "Wrong Choice!! Please Enter Again!" << endl;
            printMainMenu(index, uname);
    }
}

void deposit(int index, string uname){
    cout << "Working";

}

void withdraw(int index, string uname){
    int wdMoney;
    /*try
    {
        cout << bal.at(index);
    }
    catch(const std::out_of_range& e)
    {
        cout << endl;
        cout << "No balance!! Please deposit some money first!" << endl;

    }*/
    // The vector.at() function throws an  std::out_of_range exception. This try catch block handles it.

    if(bal.at(index) == 0){
        cout << endl;
        cout << "Your balance is 0! You can't withdraw money right now!" << endl;
        deposit(index, uname);
    }
    else{
        cout << endl;
        cout << "Enter amount to be withdrawn: ";
        cin >> wdMoney;
        cin.clear();
    }
}

void request(int index, string uname){
    if(bal.at(index) == 0){
        cout << endl;
        cout << "Your balance is 0!" << endl;
        printMainMenu(index, uname);
    }
    else{
        cout << endl;
        cout << "Dear, "<< uname << " your balance is "<< bal.at(index); 
        printMainMenu(index, uname);
    }
}