#include <iostream>
#include <vector>

using namespace std;

void line(){
    cout << "---------------------" << endl;
}

int main() {

    /* C++ STL: vector iterators */
    // vector is implemented as dynamic array

    vector <int> vec = {7, 13, 18, 30, 62, 67};

    cout << "===== Vecotor Iterators ===== " << endl;

    cout << "Begin Iterator:- " << endl;
    
    cout << "Vector.begin: " << *(vec.begin()) << endl; // pointing to first element

    line();

    cout << "End Iterator :-" << endl;
    
    cout << "Vector.End: " << *(vec.end()) << endl; // pointing to position just after the last element.
    cout << "Vector.End - 1: " << *(vec.end() - 1) << endl; // pointing last element

    line();

    // Vector Iterator Loop  

    cout << "Forword Iterator Loop:- " << endl;

    vector <int> :: iterator it;
    for (it = vec.begin(); it != vec.end(); it++){ // forword iterator loop
        cout << *(it) << " ";
    }
    cout << endl;

    line();

    cout << "Reverse Iterator Loop:- " << endl;
 
    // vector <int> :: reverse_iterator == auto == vector <int> :: iterator 
    for (vector <int> :: reverse_iterator rit = vec.rbegin(); rit != vec.rend(); rit++){ // reverse iterator loop
        cout << *(rit) << " ";
    }
    cout << endl;

    line();

    return 0;
}
