#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int>s1;
    s1.push(5);
    s1.push(4);

    while(!(s1.size() == 0)){
        cout << s1.top() << endl;
        s1.pop();
    }
    return 0;
}