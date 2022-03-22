#include <iostream>

using namespace std;
int main(){
    // Program 1 --> Finding an element from array
    int i, j, f;
    int bigNum = -9999;
    int smallNum = 9999;

    int arr[10];
    int arrMaxMin[10];

    cout << "Enter the element to find in array: ";
    cin >> f;

    for(i = 0; i<10; i++){
        cin >> arr[i];
    }
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
    return 0;
}