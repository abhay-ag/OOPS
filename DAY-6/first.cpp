// WAP to find if the given number is odd or even constraint 

#include <iostream>

using namespace std;
int main(){
    int n, res;
    cout << "Enter the number: ";
    cin >> n;
    if(n&1){
        cout << "ODD"<< endl;
    }else{
        cout << "EVEN"<< endl;
    }

    return 0;
}