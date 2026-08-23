#include <iostream>
#include <deque>
using namespace std;

int main() {
    
    /*C++ STL: Deque Container*/
    //deque is implemented as dynamic arrays

    deque <int> d;

    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);

    d.pop_back();
    d.pop_front();

    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;

    cout << "d[0] : " << d[0] << endl;

    cout << "size : " << d.size();

    return 0;
}