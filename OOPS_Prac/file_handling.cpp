/*
    This file includes basic file handling using csv file
    The code here indicates the writing and reading of data from a csv file
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream mef;
    mef.open("test.csv");
    mef << "First Name, Last Name, Middle Name" << endl;
    mef << "Abhay, Aggarwal, _"  << endl;
    mef.close();
}