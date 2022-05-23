#include <iostream>
using namespace std;

// exception handling ==> runtine anomalies
// code compiles correctly but has issues in some test cases.
// of two types: ASYNC => out of user bound      SYNC => in user bound
// examples: divide by zero.
// handling by try and catch blocks.

// statement after the throw statement will never be executed
// catch all block catch(...) syntax || multiple catch statements can be there for one throw; 

int main(){
    float a, b;

    cin >> a >> b;

    try
    {
        if(b == 0){
            throw b;
        }else{
            cout << "Result: " << a/b;
        }
    }
    catch(int b)    // type mismatch
    {   
        cout << "Divisor can't be zero" << endl;
    }catch(...){    // this will be executed
        cout << "Default Exception" << endl;
    }
    
    return 0;
}