#include <iostream>
#include <stack>
using namespace std;

void line() {
    cout << "----------------" << endl;
}
int main() {
    /*Non-Sequential Container | Stack*/
    
    stack <int> s1;
    stack <int> s2;
    
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << "Before swap: " << endl;
    cout << "size of s1 = " << s1.size() << endl;
    cout << "size of s2 = " << s2.size() << endl;

    
    line();

    s2.swap(s1);

    cout << "After swap: " << endl;
    cout << "size of s1 = " << s1.size() << endl;
    cout << "size of s2 = " << s2.size() << endl;

    line();

    cout << "Values of s2 is: " << endl;
     while (!s2.empty()){
        cout << s2.top() << " "; 
        s2.pop();
    }
    cout << endl;

    line();

    return 0;
}
