#include <iostream>
#include <vector>
using namespace std;

void line(){
    cout << "-----------------" << endl;
}

int main() {
    
    /*Pairs in C++*/

    cout << "Pair:- " << endl;
    pair <int, float> p = {313, 330.0f}; // inialiazing a pair
  
    cout << "p.first: " << p.first << endl; //313
    cout << "p.second: " << p.second << endl; //330

    line();

    cout << "Pair of Pair:- " << endl;
    pair <pair<int, string> ,char> pP = {{307, "Kalsoom"}, 'S'}; // inialiazing pair of pair

    cout << "pP.first.first: " << pP.first.first << endl; //307
    cout << "pP.first.second: " << pP.first.second << endl; //Kalsoom
    cout << "pP.second: " << pP.second << endl; //S

    line();

    /*Pairs in vector*/

    cout << "Vector pair:- " << endl;
    vector <pair <int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8}); // assume that already pair would be created so just insert or add up pair - it cann't convert indivual values in to pair but emplace_back can
    vec.emplace_back(9, 10); // create in-place objects at the time of insertion - emplace_back is more faster and efficiet as compare to push_back
    
    for (auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
