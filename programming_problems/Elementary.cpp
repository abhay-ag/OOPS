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
    return 0;
}