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

    /*
        2-D arrays with pointers:
            1. mat is the pointer of first(0th) 1-D array !! (mat + 1) ==> next row
            2. *(mat + 1) ==> Pointer to an integer => 0th element of first row
        In-General:
            mat + i ==> address of the i-th row
            *(mat+i) + j ==> address of j-th column of i-th row
            *(*(mat + i) + j) ==> value at j-th column of i-th row
    */
    return 0;
}