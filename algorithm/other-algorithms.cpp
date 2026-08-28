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

    cout << "Next Permutation:- " << endl;

    string s = "abc";

    next_permutation(s.begin(), s.end());

    cout << s << endl;
    line();

    cout << "Max, Min, & Swap:- " << endl;

    int a=3, b=5;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "Max of a & b: " << max(a, b) << endl;

    cout << "Min of a & b: " << min(a, b) << endl;

    swap(a, b);
    cout << "Swap a & b: a = " << a << " b = " << b << endl;
    
    return 0;
}
