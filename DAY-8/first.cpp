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
    return 0;
}