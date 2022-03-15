#include <iostream>

using namespace std;

void areaCalc(float side){
    float ar = side*side;
    float peri = 4*side; 
    cout << "The area and perimeter through function is: "<< ar << " and " << peri << endl;
}

class calcArea{
    private:
        float area, perimeter, side;
    public:
        void getVal(){
            cout << "Enter the side of the square: ";
            cin >> side;
        }
        void areaCalc(){
            area = side * side;
            perimeter = 4 * side;
            cout << "The area and perimeter through class is: "<< area << " and " << perimeter << endl;
        }
};

int main(){
    float area, side, perimeter;
    // FIRST
    cout << "Enter the side of the square: ";
    cin >> side;

    area = side * side;
    perimeter = 4 * side;

    cout << "The area and perimeter of the square with side: " << side << ", is: " << area << " and "<< perimeter << endl;
    // SECOND -- FUNCTIONS

    areaCalc(6);

    // THIRD -- CLASSES
    calcArea c1;

    c1.getVal();
    c1.areaCalc();
}