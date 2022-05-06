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

    // Addition
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

    // Subtraction
    Distance operator - (Distance d1){
        Distance d3;

        d3.inches = inches - d1.inches;
        d3.feet = feet - d1.feet;

        if(d3.inches < 0){
            d3.inches += 12;
            d3.feet -= 1;
        }

        return d3;
    }

    void disp() const{
        cout << feet << " feet and " << inches << " inches." << endl;
    }
};

int main(){
    Distance d1(5,11);
    Distance d2(4,12);

    Distance d3 = d1 + d2;

    //addition
    d3.disp();

    //subtraction
    Distance d4 = d1-d2;

    d4.disp();
    return 0;
}