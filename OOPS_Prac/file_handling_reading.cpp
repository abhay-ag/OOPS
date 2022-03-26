#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    ifstream ip("test.csv");

    if(!ip.is_open()) cout << "ERROR: File didn't open" << endl;

    string firstname;
    string lastname;

    while (ip.good()){
        getline(ip, firstname, ',');
        getline(ip, lastname, '\n');

        cout << "Name: " << firstname << " "<< lastname << endl;
    }
    ip.close();
    return 0;
}