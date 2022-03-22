#include <iostream>

using namespace std;

int main(){
    // Sorting an array
    // Selection Sort
    int arr[6] = {5,3,2,4,1,5};

    int i,j,third;
    for(i = 0; i<6; i++){
        for(j = i+1; j<6; j ++){
            if (arr[i] > arr[j]){
                third = arr[i];
                arr[i] = arr[j];
                arr[j] = third;
            }
        }
    }
    for(i = 0; i<6; i++){
        cout << arr[i] << endl;
    }
    return 0;
}