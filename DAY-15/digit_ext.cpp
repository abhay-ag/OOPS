#include <iostream>
#include <string>

using namespace std;

void digit(int n, int size){
    string res = "";
    for(int i = 0; i < size; i++){
        int d = n%10;
        n = n /10;
        res += to_string(d);
    }
    cout << res << endl;
}

int main(){
    digit(1234, 4);
    return 0;
}