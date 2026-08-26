#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    /*C++ STL Algorithm | sorting */

    int arr[] = {3, 0, 8, 2, 1, 5, 3};
    int n = sizeof(arr)/4 ;

    cout << "sorting in array:- " << endl;
    sort (arr, arr + n);

    for (int val : arr){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
 