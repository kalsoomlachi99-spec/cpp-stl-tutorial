#include <iostream>

using namespace std;

void line(){
    cout << "-----------------" << endl;
}

int main() {
    
    /*Pair in C++*/

    pair <int, float> p = {313, 330.0f}; // inialiazing a pair
  
    cout << "Pair:- " << endl;
    cout << "p.first: " << p.first << endl; //313
    cout << "p.second: " << p.second << endl; //330

    line();

    pair <pair<int, string> ,char> pP = {{307, "Kalsoom"}, 'S'}; // inialiazing pair of pair

    cout << "Pair of Pair:- " << endl;
    cout << "pP.first.first: " << pP.first.first << endl; //307
    cout << "pP.first.second: " << pP.first.second << endl; //Kalsoom
    cout << "pP.second: " << pP.second << endl; //S

    line();

    return 0;
}
