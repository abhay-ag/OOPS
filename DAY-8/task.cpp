#include <iostream>

using namespace std;
int main(){
    // Program 1 --> Finding an element from array
    int i, j, f;
    int bigNum = -9999;
    int smallNum = 9999;
    int count;

    int arr[10];
    int arrMaxMin[10];
    int arrEven[10];

    for(i = 0; i<10; i++){
        cout << "Enter the elements: "; 
        cin >> arr[i];
    }

    cout << "Enter the element to find in array: ";
    cin >> f;

    for(j = 0; j<10; j++){
        if (f == arr[j]){
            cout << "Element found at index: " << j << endl;
        }
    }

    // Program 2 --> Finding max and min

    for(i = 0; i < 10; i ++){
        cout << "Enter the elements: "; 
        cin >> arrMaxMin[i];
    }
    for (j = 0; j<10; j++){
        if(arrMaxMin[j] > bigNum){
            bigNum = arrMaxMin[j];
        }
        if(arrMaxMin[j] < smallNum){
            smallNum = arrMaxMin[j];
        }
    }

    cout << "Max in Array is: " << bigNum << endl;
    cout << "Min in Array is: " << smallNum << endl;

    // Program 3 --> Count even nos

    for (i = 0; i < 10; i++){
        cout << "Enter the elements: "; 
        cin >> arrEven[i];
    }

    for (j = 0; j < 10; j++){
        if(arrEven[j] % 2 == 0){
            count +=1;
        }
    }
    cout << "Count of even nos in array is: " << count << endl;

    // Program 4 --> adding matrix

    int arr2d[3][3];
    int arrSum[3][3];

    for (i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            cout << "Enter the element of 2-D Array: ";
            cin >> arr2d[i][j];
        }
    }

    for (i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            arrSum[i][j] = arr2d[i][j] + arr2d[i][j];
        }
    }
    for (i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            cout << arrSum[i][j] << " ";
        }
        cout << endl;
    }

    // Program 5 --> Diagonal elements are 1 or not

    int diag[3][3];
    int flag = 0;

    for ( i = 0; i<3; i++){
        for( j =0 ; j <3 ; j++){
            cout << "Enter the elements of 2-D Array: ";
            cin >> diag[i][j];
        }
    }
    for (i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                if(diag[i][j] == 1){
                    flag = 1;
                }
                else flag = 0;
            }
        }
    }
    if (flag){
        cout << "Every Element is 1."<<endl;
    }
    else{
        cout << "Every element is not 1."<<endl;
    }
    return 0;
}