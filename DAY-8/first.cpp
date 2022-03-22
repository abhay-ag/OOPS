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
    return 0;
}