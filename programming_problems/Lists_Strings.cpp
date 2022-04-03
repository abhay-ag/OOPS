#include <iostream>

using namespace std;
int main(){
    // Program 1 ==> Find the biggest in the array
    int arr[10] = {1,2,3,4,57,6,7,8,9,10};
    int bigNum = arr[0];

    for (int i = 0; i < 10; i++){
        if(arr[i] > bigNum){
            bigNum = arr[i];
        }
    }
    cout << "Biggest in array is: " << bigNum << endl;

    // Program 2 ==> Reverse an array

    for ( int i = 0; i < 10; i ++){
        for (int j = i+1; j < 10; j ++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]  = temp;
        }
    }
    for(int i = 0; i < 10; i ++){
        cout << arr[i] << " ";
    }
    return 0;
}