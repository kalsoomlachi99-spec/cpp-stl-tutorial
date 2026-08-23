#include <iostream>
#include <list>

using namespace std;

int main() {
    
    /*List container*/
    // list is implemented as a doubly linked list

    list <int> l;

    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(4);

    l.pop_back();
    l.pop_front();

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
