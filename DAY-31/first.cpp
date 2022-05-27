#include <iostream>
#include <vector>
using namespace std;

// Standard Template Library || STL
// contains inbuilt class and function templates
/*
    Components of STL:
        1. Containers   ==> in built class templates [sequence [vector, list, deque], associative [set, multiset, map, multimap], Adaptive, [stack, queue]]
        2. Algorithms   ==> in built function templates
        3. Iterators    ==> pointers (to traverse any container or iterate over any container)
*/
int main(){
    int n;
    vector <int> rNo;
    for(int i = 0; i < 5; i++){
        cin >> n;
        rNo.push_back(n);
    }
    for(int i = 0; i<5; i++){
        cout << rNo.at(i) << endl;
    }
    return 0;
}