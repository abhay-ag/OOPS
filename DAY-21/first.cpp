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
    void set(int i, int j){
        x = i;
        y = j;
    }

    void disp() const{
        cout << "X => " << x << " Y => " << y << endl;
    }
};

int main(){
    Point p1;

    p1.set(12, 10);

    Point p2 = p1;

    p1.disp();
    p2.disp();
    return 0;
}