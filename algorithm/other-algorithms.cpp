#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void line(){
    cout << "------------------" << endl;
}

int main() {
    
    /*C++ STL | Algorithms*/

    vector <int> vec = {1, 2, 3, 4, 5};

    cout << "Reverse:-" << endl;

    cout << "reverse a range in vector: " ;
    reverse (vec.begin()+1, vec.begin()+3); // reverse all the elements of vector

    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    line();
 
    cout << "reverse all the elements of vector: " ;

    reverse (vec.begin(), vec.end()); // reverse all the elements of vector

    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    line();

    return 0;
}
