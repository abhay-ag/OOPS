// Assignment Link: adriann.github.io/programming_problems.html
#include <iostream>

using namespace std;

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
    return 0;
}