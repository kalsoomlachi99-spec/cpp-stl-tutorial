#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

void line(){
    cout << "------------------" << endl;
}

int main() {
    
    /*C++ STL | Map*/
    
    /*two main properties of map:
       1. unique key
       2. sort keys in acending orger*/

    cout << "Map Container:- " << endl;

    map <string, int> m;

    m["tv"] = 100;
    m["laptop"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera" , 150});
    m.emplace("headphones" , 98);

    m.erase("tv");

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    if(m.find("tv") != m.end()) {
        cout << "Found\n";
    } else {
        cout << "Not found\n";
    }

    line();

    /*Multi map container*/
    /*Property:  It may contain comman keys*/

    cout << "Multi Map Container:- " << endl;

    multimap <string, int> mM;

    mM.emplace("Fridge", 33);
    mM.emplace("Fridge", 33);
    mM.emplace("Fridge", 33);
    mM.emplace("Fridge", 33);

    mM.erase(mM.find("Fridge")); // remove one key

    for (auto p : mM) {
        cout << p.first << " " << p.second << endl;
    }

    line();

    mM.erase("Fridge"); // remove all keys
    for (auto p : mM) {
        cout << p.first << " " << p.second << endl;
    }

    line();

    /*Unordered map*/
    /*two main properties of unordered map:
       1. unique key
       2. arrange keys in random order*/

    cout << "Unordered_Map Container:- " << endl;

    unordered_map <string, int> Um;
    
    Um["tv"] = 100;
    Um["laptop"] = 50;
    Um["tablet"] = 120;
    Um["watch"] = 50;

    Um.insert({"camera" , 150});
    Um.emplace("headphones" , 98);

    Um.erase("tv");

    for (auto p : Um) {
        cout << p.first << " " << p.second << endl;
    }

    line();

    return 0;
}
