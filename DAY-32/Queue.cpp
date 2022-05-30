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
    priority_queue <int>q2;
    q2.push(437777);
    q2.push(421);
    q2.push(4345);
    q2.push(4323);

    while(!q2.empty()){
        cout << q2.top() << endl;
        q2.pop();
    }
    return 0;
}