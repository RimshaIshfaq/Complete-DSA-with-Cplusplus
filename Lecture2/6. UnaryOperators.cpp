// This program demonstrates the use of unary operators in C++.

// Unary operators need only one operant (number) to perform operations unlike binary operators.
// There are two unary operators in C++:
// 1. Increment operator (++) : increases the value of operant by 1 
// a++ post increment; ++a pre increment
// //a=a+1 ====> a++ (first do work, then update) or ++a (first update, then do work)
// 2. Decrement operator (--) : decreases the value of operant by 1
// a-- post decrement; --a pre decrement

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a++; 
    cout << "Value of b (a++): " << b << endl; // b=10, a=11
    cout << "Value of a after a++: " << a << endl;

    int c = ++a;
    cout << "Value of c (++a): " << c << endl; // a=12, c=12
    cout << "Value of a after ++a: " << a << endl;

    int d=10;
    int e=d--;
    cout << "Value of e (d--): " << e << endl; // e=10, d=9
    cout << "Value of d after d--: " << d << endl;
    int f=--d;
    cout << "Value of f (--d): " << f << endl; // d=8, f=8
    cout << "Value of d after --d: " << d << endl;

    return 0; 

}