// Pointers
// Let's start with the understandong of pointers.
// It is very important concept to understand fundamentals of C++
// Pointers are special variables that store address of other variables.

#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int* ptr = &a;

    // pointer to pointer
    int** parptr = &ptr;

    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl;
    cout << parptr << endl;
    
    // Dereference Operator (*)
    // value at address
    
    cout << *(&a) << endl; // it will print out the value at address a
    cout << *(ptr) << endl; //5
    // NULL POINTER
    // A pointer that does not point at any location
    // NULL POINTER cannot be dereferenced
    int** p1 = NULL;
    cout << p1 << endl;
    return 0;
}