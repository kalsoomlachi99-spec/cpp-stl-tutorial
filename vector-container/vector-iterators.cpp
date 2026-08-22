#include <iostream>
#include <vector>

using namespace std;

void line(){
    cout << "---------------------" << endl;
}

int main() {

    /* C++ STL: vector iterators */

    vector <int> vec = {62, 67, 07, 13, 18, 30};

    cout << "===== Vecotor Iterators ===== " << endl;

    cout << "Begin Iterator:- " << endl;
    
    cout << "Vector.begin: " << *(vec.begin()) << endl; // pointing to first element

    line();

    cout << "End Iterator :-" << endl;
    
    cout << "Vector.End: " << *(vec.end()) << endl; // pointing to position just after the last element.
    cout << "Vector.End - 1: " << *(vec.end() - 1) << endl; // pointing last element

    line();

    return 0;
}
