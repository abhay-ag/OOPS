// Assignment Link: adriann.github.io/programming_problems.html
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

// For program 4
bool isPrime(int n){
    for (int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // Problem - 1 ==> Sum of number that are only multiples of 3 or 5
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i ++){
        if(i % 3 == 0 || i %5 == 0)
        sum += i;
    }
    cout << "Sum: " << sum  << endl;

    // Problem - 2 ==> Choice to multiply or sum a series of 1 to n

    cout << "Enter a number: ";
    cin >> n;
    sum = 0;
    int prod = 1;

    char choice;
    cout << "Choose + or *: ";
    cin >> choice;

    for(int i = 1; i <=n; i ++){
        if(choice == '+'){
            sum += i;
        }else if(choice == '*'){
            prod *=  i;
        }
    } 
    if (choice == '+'){
        cout << "Sum: " << sum <<endl;
    }else if(choice == '*'){
        cout << "Product: " << prod << endl;
    }

    // Problem -3 ==> Print tables upto 12

    for(int i = 1; i <= 12; i ++){
        for (int j = 1; j<=10;j++){
            cout << i << " X " << j << " = " << i*j << endl;
        }
        cout << endl;
    }

    // Problem -4 ==> Print many prime numbers

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;

    // Problem -5 ==> Make a guessing game
    
    srand(time(0));
    int randInt = rand() % 10 +1;

    int guessNo = 0;
    int tries = 0;

    do
    {
        cout << "Guess a number [1 - 10]: ";
        cin >> guessNo;

        tries += 1;

        
        if (guessNo < randInt){
            cout << "Smaller, Please try a higher number" << endl;
        }else if (guessNo > randInt){
            cout << "Higher, Please try a smaller number" << endl;;
        }else if(guessNo == randInt){
            cout << "You guessed the number in, " << tries << " tries." << endl;
        }
        
    } while (guessNo != randInt);
    

    return 0;
}