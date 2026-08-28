#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparators(pair<int, int> p1, pair <int, int> p2){ //custom comparator sort the second element of pair in accending order
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true; // if second elements are same then sort the first element
    else return false; //if(p1.first > p2.first)
}

void line(){
    cout << "-----------------------" << endl;
}

int main() {
    
    /*C++ STL Algorithm | sorting */
    
    cout << "Sorting in array:- " << endl;
    int arr[] = {3, 0, 8, 2, 1, 5, 3};
    int n = sizeof(arr)/4 ;

    sort (arr, arr + n);

    for (int val : arr){
        cout << val << " ";
    }
    cout << endl;
    line();

    cout << "Sorting in vector:- " << endl;

    vector <int> vec = {3, 0, 8, 2, 1, 5, 3};

    sort (vec.begin(), vec.end(), greater<int>()); // greater functor or camparator used to sort data in decending order

    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    line();

    cout << "Sorting in vector of pair:- " << endl;
    cout << "Sort the first element." << endl;

    vector <pair <int, int>> vecOfPair = {{1,2}, {2,3}, {3,1}, {7,1}};

    sort (vec.begin(), vec.end()); 

    for (auto p : vecOfPair){
        cout << p.first << " " << p.second << endl; //sort according to the first value of pair
    }
    line();

    cout << "Sorting in vector of pair:- " << endl;
    cout << "Sort the second element." << endl;

    vector <pair <int, int>> cusVecOfPair = {{1,2}, {2,3}, {3,1}, {7,1}};

    sort (cusVecOfPair.begin(), cusVecOfPair.end(), comparators); 

    for (auto p : cusVecOfPair){
        cout << p.first << " " << p.second << endl; //sort according to the first value of pair
    }
    line();

  
    return 0;
}
 