#include <iostream>
#include <queue>
using namespace std;

int main() {
    /*C++ STL | Queue*/
    
    queue <int> q1;
   
    q1.push(1);
    q1.push(2);
    q1.emplace(3);
    q1.emplace(4);

    queue<int> q2;

    q2.push(5);
    q2.push(6);
    q2.emplace(7);
    
    q2.swap(q1);

    cout << "Size of queue 1: " << q1.size() << endl;
    cout << "Elements of queue 1: " << endl;

    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;

    cout << "Size of queue 2: " << q2.size() << endl;
    cout << "Elements of queue 2: " << endl;

    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;

    return 0;
}
