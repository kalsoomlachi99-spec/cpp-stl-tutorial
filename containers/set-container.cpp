#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    
    /*C++ STL | Set Container*/
    /*Properties:
       1. store unique values
       2.  sort in accending order*/
      
    cout << "Set Container:- " << endl;
    
    set <int> s;

    s.insert(6);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for (auto val: s){
        cout << val << " ";
    }
    cout << endl;

    cout << "Lower bound = " << *(s.lower_bound(3)) << endl; // should not be less than the key
    cout << "Upper bound = " << *(s.upper_bound(3)) << endl; // should be greater than the key

    return 0;
}
