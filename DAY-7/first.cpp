#include <iostream>

using namespace std; 

int main(){
    int choice;
    cout << "Enter the choice for Day: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Choice";
        break;
    }
    int res = 0;

    cout << endl;

    while (res <=100){
        if (!(res %4 == 0)){
            cout << res << endl;
        }
        res +=2;
    }
    // Input 10 nums and sum them

    int i, nums;
    int sum = 0;
    for ( i = 1; i <= 10; i++){
        cout << "Enter a number: ";
        cin >> nums;
        sum += nums;
    }
    cout << sum << endl;

    //  show numbers from 1 to 100 and skip multiples of 4 and 5

    int j;
    j = 1;

    while (j <= 100){
        if (!(j % 4 == 0 || j % 5 == 0)){
            cout << j << endl;
        }
        j += 1;
    }
    return 0;
}