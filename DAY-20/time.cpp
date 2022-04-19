#include <iostream>
using namespace std;

class Time{
    int h, m, s;
    
    public: 

    Time(int hour = 0, int minutes = 0, int seconds = 0){
        h = hour; m = minutes; s = seconds;
    }

    void disp() const{
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main(){
    Time t1(11,22,22);
    
    t1.disp();
    return 0;
}