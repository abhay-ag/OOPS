#include <iostream>
#include <string>

using namespace std;

void palindrome(string num, int num1);

void digit(int n, int size){
    int num = n;
    string res = "";
    for(int i = 0; i < size; i++){
        int d = n%10;
        n = n /10;
        res += to_string(d);
    }
    cout << res << endl;
    palindrome(res, num);
}

void palindrome(string num, int num1){
    string numStr = to_string(num1);

    if(num == numStr){
        cout << "Number is palindrome" << endl;
    }else{
        cout << "Number is not palindrome" << endl;
    }
}

int main(){
    digit(1221, 4);
    return 0;
}