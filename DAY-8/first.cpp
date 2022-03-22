// Loops

#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i = 1; i<= 5; i ++){
        for (j = 1; j<= 10; j++){
            if (i!=j){
                cout << i << "\t" << j << endl;
            }
        }
    }
    int k, l;
    cout << "WHILE LOOP" << endl;
    k =1;
    while (k<=5){
        l = 1;
        while (l<=10){
            cout << k << "\t" << l << endl;
            l++;
        }
        k++;
    }
    /*
        ARRAYS:
            1. Collection of Elements
            2. Homogeneous
            3. Occupies continuous memory
            4. Each element has the same name with different index numbers
            5. Index number varies from lower bound to upper bound
            6. Total Memory occupy = total no elements * size of element
        Declaration:
            <datatype> <name of array>[size of array];
    */
    return 0;
}