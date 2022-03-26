/*
    This file includes basic file handling using csv file
    The code here indicates the writing and reading of data from a csv file
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream mef;               // Opening a file if it doesn't exist it will be created
    mef.open("test.csv");
    mef << "Abhay, Aggarwal"  << endl;      // Values are separated by commas, and a new line character is inserted at the end to enter a new row in the csv file
    mef.close();                // Closing a file is necessary and has to be donee ohterwise it results in error in the future
}