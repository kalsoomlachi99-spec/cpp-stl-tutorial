#include <iostream>
#include <queue>
using namespace std;

void line() {
    cout << "-------------------" << endl;
}

int main() {
    
    /*C++ STL | Priority Queue*/
    // by default give higher priority to greator element or store element in decending order  

    priority_queue <int> pQ;

    pQ.push(1);
    pQ.push(5);
    pQ.push(3);
    pQ.emplace(10);

    cout << "Size of pQ: " << pQ.size() << endl;
    cout << "Elements of pQ: " << endl;

    while(!pQ.empty()){
        cout << pQ.top() << " ";
        pQ.pop();
    }
    cout << endl;
    
    line();

    priority_queue <int, vector<int> , greater<int>> rPQ; // reverse of priority_queue | give priority to smaller element

    rPQ.push(1); 
    rPQ.push(5);
    rPQ.push(3);
    rPQ.emplace(10);

    cout << "Elements of rPQ: " << endl;

    while(!rPQ.empty()){
        cout << rPQ.top() << " ";
        rPQ.pop();
    }
    cout << endl;
    
    line();
 
    cout << "All fucntions e.g \n.push, emplace \n.top \n.pop \n.size \n.empty \nworks same as stack and queue." << endl; 
    line();

    /* TCs: 
    top : O(1)
    pop : O(logn) // logn due to sorting
    push, emplace : O(logn) */

    return 0;
}
