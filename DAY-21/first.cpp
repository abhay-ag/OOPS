// Copy constructor
#include <iostream>

using namespace std;

class Point{
    int x, y;
    public:
    // we want the values of p1 into p2
    // for that we require the copy constructor

    // default constructor made
    Point(){
        x = 0;
        y = 0;
    }
    // const used to prevent from changing the values of x and y
    Point(const Point &p){            // call by refernce for copy constructor
        x = p.x;
        y = p.y;
    }
    // destructor
    ~Point(){
        cout << "Program ended." << endl;
    }
    void set(int i, int j){
        x = i;
        y = j;
    }
    void disp() const{
        cout << "X => " << x << " Y => " << y << endl;
    }
};

/*
    DESTRUCTOR:
        1. Called when an object dies.[pointer moved out of the object scope]
        2. no return type

    Syntax:
        ~ <Class name>(){

        }
*/

int main(){
    Point p1;

    p1.set(12, 10);

    Point p2 = p1;

    p1.disp();
    p2.disp();
    return 0;
}