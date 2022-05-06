#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;
    public:

    Distance (int i = 0, int j = 0){
        feet = i;
        inches = j;
    }

    Distance operator + (Distance d1){
        Distance temp;
        temp.feet = feet + d1.feet;
        temp.inches = inches + d1.inches;
        
        if(temp.inches % 12 == 0){
            while (temp.inches != 0){
                temp.inches -= 12;
                temp.feet += 1;
            }
        }else{
            while(!(temp.inches < 12)){
                if(temp.inches >= 12){
                    temp.inches -= 12;
                    temp.feet += 1;
                }
            }
        }

        return temp;
    }

    void disp() const{
        cout << feet << " feet and " << inches << " inches." << endl;
    }
};

int main(){
    Distance d1(5,11);
    Distance d2(4,14);

    Distance d3 = d1 + d2;

    d3.disp();
    return 0;
}