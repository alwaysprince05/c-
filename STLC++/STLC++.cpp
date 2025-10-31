#include<bits/stdc++.h> // all the libraries inside this. we don't need to indivisually add them.
using namespace std;

int main(){ // basic skeleton of the code

    return 0;
}

// c++ stl is divided into four parts
// Algorithums
// Containers
// Functions
// Iterators

// currently we are learning with container it can be a vector, queue, set, map etc. and after that we are learning with the iterators
// after that we are learning with the diff algo and functions that exist in c++ stl.

// before moving to the container we have to actually learn about the pairs
// pairs -> it is the part of utility libary.


// Pairs
void expalinPair(){

    pair<int, int> p = {1,3};

    cout << p.first << " " << p.second;

    pair<int , pair<int, int>> p2 = {1, {3,4}};

    cout << p2.first << " " << p2.second.second << " " << p2.second.first;

    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

    cout << arr[1].second;
}
