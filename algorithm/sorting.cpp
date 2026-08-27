#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    /*C++ STL Algorithm | sorting */
    
    cout << "Sorting in array:- " << endl;
    int arr[] = {3, 0, 8, 2, 1, 5, 3};
    int n = sizeof(arr)/4 ;

    sort (arr, arr + n);

    for (int val : arr){
        cout << val << " ";
    }
    cout << endl;

    cout << "Sorting in vector:- " << endl;

    vector <int> vec = {3, 0, 8, 2, 1, 5, 3};

    sort (vec.begin(), vec.end());

    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
 