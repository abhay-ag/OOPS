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
        Declaration 1-D array:
            <datatype> <name of array>[size of array];
        Declaration 2-D array:
            <datatype> <name of array>[1st dim // rows] [2nd dim // cols]
    */

    int mat[3][4];
    int a, b;
    for (a = 0 ; a < 3; a++){
        for (b = 0 ; b < 4; b++){
            cin >> mat[a][b];
        }
    }
    for (a = 0 ; a < 3; a++){
        for (b = 0 ; b < 4; b++){
            cout << mat[a][b] << " ";
        }
        cout << endl;
    }
    return 0;
}