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
    // vector is dynamic and grows according to the user requirement.
    cout << rNo.size() << endl;

    // vector <int> <ob_name> (size, value to be filled)
    vector <int>v1(5, 10);
    cout << v1.size() << endl;

    for(int i = 0; i < 5; i++){
        cin >> n;
        rNo.push_back(n);
    }
    for(int i = 0; i<5; i++){
        cout << rNo.at(i) << endl;
    }
    // ways to access the elements of a vector
    /*
        1. v1[<index>] -> first type
        2. v1.at(<index>) -> second type
        3. v1.front()   --> return the first element of the vector
        4. v1.back() --> return the last element of the vector
        5. int *p = v1.data() --> return the starting index of vector
    */

    /*
        1. size() -> return the total number of elements in the vector
        2. capacity() -> always expandable and grows in the power of 2^<last_index> && equal or greater than the size of vector.
    */
    return 0;
}