// Vectors
// non primitive data structure
// same liek arrays but they are dynamic in size
// can grow and shrink in size

// STL - standard template library  // inbuilt library in C++  // Implementation of data structures are presenet in this library
// STL containers - vectors, set, stacks, queues

// include individula header files for each data structure
// syntax
// vector <int> v;
// vector <int> v = {1,2,3};
// vector <int> v = (3,0)
// loop used in for loop

//run this in compiler  // g++ -std=c++11 Vectors.cpp; .\a.exe
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // syntax to create vector
    vector<int> vec = {1,2,3,4,5};

    // for each loop
    for (int i : vec) {
        cout << i << endl;
    }

    // vector functions
    // size
    cout << "size before push back:" << vec.size() << endl;
    // push_back
    vec.push_back(6);
    cout << "size after push back" << vec.size() << endl;
    // pop_back 
    vec.pop_back();
    //front 
    cout << vec.front() << endl;
    // back //last value
    cout << vec.back() << endl;
    // at (get value by index)
    cout << vec.at(1) << endl;
    
    return 0;
}




// static vs dynamic memory
// static allocation is on compilation time // in stack
// Dynamic memory is allocate don run time // in heap
