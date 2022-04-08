#include <iostream>

/*
    1. Multidimensional Array
        2-D array in the form of Matrix -> Rows and Columns

    2. Declaration
        <datatype> <array name> [<rows>] [<columns>]
        EG: int mat[3][4];
*/

using namespace std;

int main(){
    int mat[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> mat[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}