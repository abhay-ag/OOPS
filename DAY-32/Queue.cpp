#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <int>q1;
    q1.push(45);
    q1.push(33);
    q1.push(12);
    q1.push(55);

    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
    return 0;
}