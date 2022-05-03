#include <iostream>
using namespace std;

class Time{
    int h, m, s;
    
    public: 

    // initialized constructor with default parameters
    Time(int hour = 0, int minutes = 0, int seconds = 0){
        h = hour; m = minutes; s = seconds;
    }

    // defined a function
    Time addtime(Time t1){
        Time t3;
        
        t3.s = t1.s + s;
        t3.m = t1.m + m;
        t3.h = t1.h + h;

        if (t3.s > 60){     // checking for second greater than 60
            t3.s -= 60;
            t3.m += 1;
        }
        
        if (t3.m > 60){      // checking for minutes greater than 60
            t3.m -= 60;
            t3.h += 1;
        }

        if(t3.h > 24){      // checking for hours greater than 24
            t3.h -= 24;
        }

        return t3;
    }

    // using operator overloading

    Time operator + (Time t1){
        // same logic but different definition.
        Time t3;
        
        t3.s = t1.s + s;
        t3.m = t1.m + m;
        t3.h = t1.h + h;

        if (t3.s > 60){     // checking for second greater than 60
            t3.s -= 60;
            t3.m += 1;
        }
        
        if (t3.m > 60){      // checking for minutes greater than 60
            t3.m -= 60;
            t3.h += 1;
        }

        if(t3.h > 24){      // checking for hours greater than 24
            t3.h -= 24;
        }

        return t3;
    }

    void disp() const{
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main(){
    Time t1(11, 26, 39), t2(11, 40, 40), t3;        // creating three objects
    
    t1.disp();
    t2.disp();

    // t3 = t1.addtime(t2);        // calling the addtime() function


    // using operator overloading
    Time resT = t1 + t2;
    resT.disp();

    // t3.disp();      // displaying the result
    return 0;
}