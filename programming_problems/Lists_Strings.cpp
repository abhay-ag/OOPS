#include <iostream>
#include <vector>

using namespace std;

int sumArr(int arr[], int start, int len){
    if (start >= len)
        return 0;
    
    return (arr[start] + sumArr(arr, start +1, len));
}

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
        cout << arr[i] << " " ;
    }
    cout << endl;

    // Program 3 ==> If an element exists in an array

    int find;

    cout << "Enter the number you want to find: ";
    cin >> find;
    bool found = false;
    for (int i = 0; i < 10; i++){
        if(arr[i] == find){
            found = true;
            break;
        }
    }
    if(found){
        cout << "Element found." << endl;
    }else{cout << "Element not found." << endl;}

    // Program 4 ==> Elements on the odd positions of array

    for (int i = 1; i < 10; i +=2){
        cout << arr[i]<< " ";
    }cout << endl;

    // Program 5 ==> Running total of an array

    int sum = 0;
    vector<int> runSum;

    for (int i = 0; i < 10; i ++){
        sum += arr[i];
        runSum.push_back(sum);
    }
    for (int i = 0; i < runSum.size(); i ++){
        cout << runSum[i] << " ";
    }cout << endl;

    // Program 6 ==> Reverse a string

    string name = "Abhay";
    int length = name.length();

    for (int i = 0; i < length; i++){
        for (int j = i+1; j < length; j++){
            char temp  = name[i];
            name[i] = name[j];
            name[j] = temp;
        }
    }
    cout << "Reversed String ==> " << name << endl;

    // Program 7 => Sum using for loop, while loop, recursion
    sum = 0;
    for(int i = 0; i < 10; i ++){
        sum +=  arr[i];
    }cout << "Sum [for loop]: " << sum << endl;
    int i = 0;
    sum = 0;
    while(i != 10){
        sum += arr[i];
        i  += 1;
    }
    cout << "Sum [while loop]: " << sum << endl;

    int sumRec = sumArr(arr, 0, 10);
    cout << "Sum [recursion]: " << sumRec << endl;

    // Program 8 ==> concat two arrays

    int arr1[10] = {1,1,1,2,34,1,2,12,123,1};
    int arr2[10] = {2,1,2,2,11,3,2,12,121,2};
    
    vector<int> concat;

    for (i = 0; i < 1; i ++){
        for ( int j = 0; j < 10; j++){
            concat.push_back(arr1[j]);
        }
        for( int k = 0 ; k < 10 ; k ++){
            concat.push_back(arr2[k]);
        }
    }

    for(i = 0; i < 20; i ++){
        cout << concat[i] << " ";
    }cout << endl;

    return 0;
}