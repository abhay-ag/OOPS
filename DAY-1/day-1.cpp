#include <iostream>
#define msg "Hello World";
namespace first{
    int value = 24;
}

using namespace std;
int main(){
    // Hello World
    cout << "Hello World" <<endl;
    // Macro
    cout << msg;
    cout << endl;
    // namespace
    cout << first::value;
}