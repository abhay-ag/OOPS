#include <iostream>

using namespace std;
int main(){
    // Program 1 --> Finding an element from array
    int i, j, f;

    int arr[10];

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
    return 0;
}