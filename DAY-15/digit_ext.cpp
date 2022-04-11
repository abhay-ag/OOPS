#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void palindrome(int num, int num1);

// Not using strings and string stream

/*void digit(int n, int size){
    int num = n;
    string res = "";
    for(int i = 0; i < size; i++){
        int d = n%10;
        n = n /10;
        res += to_string(d);
    }
    stringstream numStr(res);

    int numRev = 0;
    numStr >> numRev;
    palindrome(numRev, num);
}*/

void revNum(int n, int size){
    int revNo = 0;
    int num = n;
    for(int i = 0; i < size; i++){
        int rem = n %10;
        revNo = revNo * 10 + rem;
        n = n/10;
    }
    palindrome(revNo, num);
}

void palindrome(int num, int num1){

    if(num == num1){
        cout << "Number is palindrome" << endl;
    }else{
        cout << "Number is not palindrome" << endl;
    }
}

int main(){
    // digit(1234, 4);
    revNum(1321,4);
    return 0;
}