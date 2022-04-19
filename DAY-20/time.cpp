#include <iostream>
using namespace std;

class Time{
    int h, m, s;
    
    public: 

    Time(int hour = 0, int minutes = 0, int seconds = 0){
        h = hour; m = minutes; s = seconds;
    }

    Time addtime(Time t1){
        Time t3;
        
        t3.s = t1.s + s;
        t3.m = t1.m + m;
        t3.h = t1.h + h;

        if (t3.s > 60){
            t3.s -= 60;
            t3.m += 1;
        }
        
        if (t3.m > 60){
            t3.m -= 60;
            t3.h += 1;
        }

        if(t3.h > 24){
            t3.h -= 24;
        }

        return t3;
    }

    void disp() const{
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main(){
    Time t1(11, 26, 39), t2(14, 40, 40), t3;
    
    t1.disp();
    t2.disp();

    t3 = t1.addtime(t2);

    t3.disp();
    return 0;
}