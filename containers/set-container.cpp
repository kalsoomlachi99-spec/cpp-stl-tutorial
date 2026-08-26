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

    cout << "Unordered Set Container:- " << endl;

     /*Properties:
       1. store unique values
       2. unsorted , random order*/

    unordered_set <int> uS; //TC: O(1)

    uS.insert(1);
    uS.insert(2);
    uS.insert(3);
    uS.insert(4);
    uS.insert(5);

    uS.insert(4);
    uS.insert(3);

    for (auto val : uS){
        cout << val << " " ;
    }
    cout << endl;

    cout << "Multi Set Container:- " << endl;

    multiset <int> mS; // store common values

    mS.insert(1);
    mS.insert(2);
    mS.insert(3);
    mS.insert(4);
    mS.insert(5);

    mS.insert(1);
    mS.insert(2);
    mS.insert(3);

    for (auto val : mS){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
