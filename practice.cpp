#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    // First Program
    // Program executes line by line

    cout << "     /|" << endl;
    cout << "    / |" << endl;
    cout << "   /  |" << endl;
    cout << "  /   |" << endl;
    cout << " /____|" << endl;

    // Second Program
    // Use of variables is to avoid changing a single value many times.
    string name = "George";
    int age = 70;

    cout << "There once was a man named " << name << endl;
    cout << "He was " << age << " years old" << endl;

    // Reassigning a variable

    name = "Mike";

    cout << "He liked the name " << name << endl;
    cout << "But he did not like being " << age << endl;

    // Program 3
    // Data types in C++

    int num = 10;
    long int number = 25;
    char ask = 'y'; // Single character string
    string msg = "Hello World";
    double numDouble = 2234.201; // Float with less decimal points
    float numFloat = 232.23; // Float with more decimal points
    bool truth = true;

    cout << num << endl << number << endl << ask << endl << msg << endl << numDouble << endl << numFloat << endl << truth;

    //  Program 4
    // Working with strings

    cout << "\nAbhay Aggarwal" << endl; // endl inserts a new line wherever it is put
    cout << "Hello\n"; // alternate use \n

    string phrase = "Girrafe Academy";
    //               0123456789----->
    int len = phrase.length();
    char firstChar = phrase[0];

    cout << phrase << endl << "With length: " << len << endl << "First Character: " << firstChar << endl;

    phrase[0] = 'B';
    cout << "Change String: " << phrase<<endl;

    phrase = "Girrafe Academy";

    // Finding Characters in a string

    cout << phrase.find("Academy",0) << endl;

    // Substring of a string

    cout << phrase.substr(0,5) << endl;

    // Working with numbers
    // Program 5

    cout << -40 << endl;
    cout << 5+7 << endl; // / -> division  % -> Modulus Operator * -> Multiplication operator
    cout << 10%3 << endl;  // Follows PEMDAS Rule

    cout << 4 + 5 * 10 << endl; // (4 +5)*10 ==> 90

    // Incrementing a number after it is declared

    int numberInc = 10;
    numberInc++;
    cout << numberInc << endl;

    // Arithmetic operation a float and integer it will always return a float
    // However when we perform mathematics on two integers the result is integer

    // Performing maths operations on numbers

    cout << pow(2, 4) << endl; // Power operation
    cout << sqrt(36) << endl; // Square root Operation
    cout << round(4.3) << endl; //Follows normal round off rules
    cout << ceil (4.1) << endl; // Rounds up the number
    cout << floor(5.6) <<endl; // Rounds Down the number
    cout << fmax(10,5) << endl; // Returns the biggest nubmer FMIN does the opposite

    // Program 6


    // TO GET A STRING IN INPUT 

    string yourName;
    cout << "Enter Your Name: ";
    getline(cin, yourName);

    cout << "Hello! " << yourName << endl;

    // Getting input from user

    /*int ageInput;

    cout << "Enter your age: ";
    cin >> ageInput;
    cout << "You are " << ageInput << " years old!! " <<endl;
    */
    // Program 7

    // Building a mad lib game

    string color, pluralNoun, celebrity;

    cout << "Enter a Color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a Celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color <<endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}